#include "Voiture.hpp"

Voiture::Voiture(const Point& position, const Point& destination) :
    position{ position },
    destination{ destination }
{}

Voiture::Voiture(const Voiture& voiture) :
    position{ voiture.position },
    destination{ voiture.destination }
{}

Voiture::~Voiture() 
{}

Point Voiture::Position() const {
    return this->position;
}

Point Voiture::Destination() const {
    return this->destination;
}

void Voiture::Avancer() {
    if (this->position == this->destination) {
        delete this;
    } else {
        // Un point doit toujours passer par le centre du carrefour avant d'aller à sa destination.
        if (this->position == Point{ 1, 1 }) {
            this->position = this->destination;
        } else {
            this->position = Point{ 1, 1 };
        }
    }
}

Voiture& Voiture::operator=(const Voiture& voiture) {
    this->position = voiture.position;
    this->destination = voiture.destination;

    return *this;
}