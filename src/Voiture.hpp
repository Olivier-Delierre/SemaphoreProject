#pragma once

#include "Point.hpp"

/**
 * Une classe permettant de représenter une voiture.
 */
class Voiture {
public:
    /**
     * Constructeur parametré.
     * @param position La position de la voiture.
     * @param destination La destination de la voiture.
     */
    Voiture(const Point& position, const Point& destination);
    /**
     * Constructeur par recopie.
     * @param voiture La voiture à recopier.
     */
    Voiture(const Voiture& voiture);
    /**
     * Voiture par défaut qui génère une voiture à une position et une destination aléatoire.
     */
    Voiture();
    /**
     * Destructeur par défaut de la voiture.
     */
    ~Voiture();

    /**
     * Getter de la position de la voiture.
     * @returns la position de la voiture.
     */
    Point Position() const;
    /**
     * Getter de la destination de la voiture.
     * @returns la destination de la voiture.
     */
    Point Destination() const;

    /**
     * Avance la voiture vers sa destination.
     */
    void Avancer();

    /**
     * Surcharge de l'opérateur d'assignement.
     * @param voiture La voiture à assigner.
     */
    Voiture& operator=(const Voiture& voiture);
private:
    /**
     * Un Point représentant la position de la voiture.
     */
    Point position;
    /**
     * Un point représentant la destination de la voiture.
     */
    Point destination;
};