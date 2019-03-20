#include "Carrefour.hpp"
#include <cmath>

// Déclaration des Points statiques.
Point Carrefour::Centre{ 1, 1 };
Point Carrefour::Nord{ 1, 0 };
Point Carrefour::Est{ 2, 1 };
Point Carrefour::Sud{ 1, 2 };
Point Carrefour::Ouest{ 0, 1 };

Carrefour::Carrefour() : 
    positions{ 
        new Point{ Carrefour::Centre },
        new Point{ Carrefour::Nord },
        new Point{ Carrefour::Est },
        new Point{ Carrefour::Sud },
        new Point{ Carrefour::Ouest }
    } 
{}


Point Carrefour::PositionAleatoire() {
    int nombreAleatoire = std::rand() % 4;
    switch (nombreAleatoire) {
    case 0:
        return Carrefour::Nord;
    case 1:
        return Carrefour::Est;
    case 2:
        return Carrefour::Sud;
    case 3:
        return Carrefour::Ouest;
    default:
        return Carrefour::Nord;
    }
}

Point Carrefour::PositionAleatoire(const Point& positionInterdite) {
    int nombreAleatoire = std::rand() % 4;
    switch (nombreAleatoire) {
    case 0:
        return (positionInterdite != Carrefour::Nord) ? Carrefour::Nord : Carrefour::Est;
    case 1:
        return (positionInterdite != Carrefour::Est) ? Carrefour::Est : Carrefour::Sud;
    case 2:
        return (positionInterdite != Carrefour::Sud) ? Carrefour::Sud : Carrefour::Ouest;
    case 4:
        return (positionInterdite != Carrefour::Ouest) ? Carrefour::Ouest : Carrefour::Nord;
    default:
        return Carrefour::Nord;
    }
}