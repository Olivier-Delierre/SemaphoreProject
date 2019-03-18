#include "Point.hpp"

Point::Point(int x, int y) : x{ x }, y{ y } {}

Point::Point(const Point& p) : x{ p.x }, y{ p.y } {}

int Point::X() const {
    return this->x;
}

int Point::Y() const {
    return this->y;
}

bool operator==(const Point& p1, const Point& p2) {
    return (p1.X() == p2.X() && p1.Y() == p2.Y());
}

bool operator!=(const Point& p1, const Point& p2) {
    return !(p1 == p2);
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << '(' << p.X() << ',' << p.Y() << ')';
    return os;
}