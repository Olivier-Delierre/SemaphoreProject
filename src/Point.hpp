#include <iostream>

/**
 * Classe représentant un point avec des coordonnées carthésiennes. 
 */
class Point {
	public:
        /**
         * Constructeur parametré.
         * @params x La coordonnée en abscisse.
         * @params y La coordonnée en ordonnée. 
         */
        Point(int x, int y);
        /**
         * Constructeur par recopie.
         * @params p Le point à recopier.
         */ 
        Point(const Point& p);
        /**
         * Getter de la coordonnée en abscisse.
         * @returns la coordonnée en abscisse.
         */
        int X() const;
        /**
         * Getter de la coordonnée en ordonnée.
         * @returns la coordonnée en ordonnée.
         */
        int Y() const;
    private:
        /**
         * Les coordonnées en abscisse et en ordonnée.
         */
        int x, y;
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