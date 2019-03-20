#pragma once

#include "Point.hpp"
#include <vector>

struct Semaphore {
    int Identifiant;
    key_t Cle;
};

class Carrefour {
public:
    /**
     * Centre du carrefour.
     */
    static Point Centre;
    /**
     *  Nord du carrefour.
     */
    static Point Nord;
    /**
     * Est du carrefour.
     */
    static Point Est;
    /**
     * Sud du carrefour.
     */
    static Point Sud;
    /**
     * Ouest du carrefour.
     */
    static Point Ouest;

    /**
     * Constructeur par défaut qui génère un vecteur de position
     * à l'aide des Points statiques.
     */
    Carrefour();

    /**
     * Renvoi un point cardinal du carrefour aléatoirement.
     * @returns un point cardinal aléatoire.
     */
    static Point PositionAleatoire();
    /**
     * Renvoi un point cardinal du carrefour aléatoirement en éliminant le point
     * donné en paramètre.
     * @returns un point cardinal aléatoire excepté celui passé en paramètre.
     */
    static Point PositionAleatoire(const Point& positionInterdite);
private:
    std::vector<Point*> positions;
};