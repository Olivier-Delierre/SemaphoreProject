#include "Point.hpp"

Point::Point(int x, int y) : x{ x }, y{ y } {}

int Point::X() const {
    return this->x;
}

int Point::Y() const {
    return this->y;
}

bool operator==(const Point& p1, const Point& p2) {
    return (p1.X() == p2.X() && p1.Y() == p2.Y());
}