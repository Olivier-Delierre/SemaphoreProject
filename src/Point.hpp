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