#include "Point.hpp"

/**
 * Une classe permettant de représenter une voiture.
 */
class Voiture {
public:
    /**
     * Constructeur parametré.
     * @params position La position de la voiture.
     * @params destination La destination de la voiture.
     */
    Voiture(Point position, Point destination);
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
private:
    /**
     * Un Point représentant la position de la voiture.
     */
    Point* position;
    /**
     * Un point représentant la destination de la voiture.
     */
    Point* destination;
};