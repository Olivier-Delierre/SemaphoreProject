#pragma once

#include <iostream>

/**
 * Classe représentant un point avec des coordonnées carthésiennes. 
 */
class Point {
	public:
        /**
         * Constructeur parametré.
         * @param x La coordonnée en abscisse.
         * @param y La coordonnée en ordonnée. 
         */
        Point(unsigned short x, unsigned short y);
        /**
         * Constructeur par recopie.
         * @param point Le point à recopier.
         */ 
        Point(const Point& point);
        /**
         * Constructeur par défaut.
         */
        Point();
        /**
         * Destructeur par défaut.
         */
        ~Point();

        /**
         * Getter de la coordonnée en abscisse.
         * @returns la coordonnée en abscisse.
         */
        unsigned short X() const;
        /**
         * Getter de la coordonnée en ordonnée.
         * @returns la coordonnée en ordonnée.
         */
        unsigned short Y() const;

        /**
         * Surcharge de l'opérateur d'assignation.
         * @param point Le point à assigner.
         */
        Point& operator=(const Point& p);
    private:
        /**
         * Les coordonnées en abscisse et en ordonnée.
         */
        unsigned short x, y;
};

/**
 * Surcharge de l'opérateur d'égalité qui vérifie que deux points pointent vers les mêmes coordonnées.
 */
bool operator==(const Point& p1, const Point& p2);
/**
 * Surcharge de l'opérateur d'inégalité qui vérifie que deux points ne pointent pas vers les mêmes coordonnées.
 */
bool operator!=(const Point& p1, const Point& p2);
/**
 * Surcharge de l'opérateur de redirection vers la sortie standard.
 * Forme de la redirection : (x, y)
 */
std::ostream& operator<<(std::ostream& os, const Point& p);