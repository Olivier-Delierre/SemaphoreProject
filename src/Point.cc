#include "Point.hpp"

Point::Point(unsigned short x, unsigned short y) : x{ x }, y{ y } {
}

Point::Point(const Point& point) :
    Point::Point(point.x, point.y)
{}

Point::Point() :
    Point::Point(0, 0)
{}

Point::~Point() {}

unsigned short Point::X() const {
    return this->x;
}

unsigned short Point::Y() const {
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

Point& Point::operator=(const Point& point) {
    this->x = point.x;
    this->y = point.y;

    return *this;
}