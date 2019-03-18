#include "Voiture.hpp"

Voiture::Voiture(Point position, Point destination) :
    position{ &position },
    destination{ &destination }
{}

Voiture::~Voiture() {
    delete this->position;
    delete this->destination;
}

Point Voiture::Position() const {
    return *(this->position);
}

Point Voiture::Destination() const {
    return *(this->destination);
}

void Voiture::Avancer() {
    if (*(this->position) == *(this->destination)) {
        delete this;
    } else {
        // Un point doit toujours passer par le centre du carrefour avant d'aller à sa destination.
        if (*(this->position) == Point{ 1, 1 }) {
            delete this->position;
            this->position = new Point{ *(this->destination) };
        } else {
            delete this->position;
            this->position = new Point{ 1, 1 };
        }
    }
}