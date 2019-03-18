#include "Voiture.hpp"
#include <vector>
#include <iostream>

int main() {
    Voiture* v = new Voiture{ Point{ 1, 1 }, Point{ 2, 3 } };
    std::cout << v->Position();
    std::cout << v->Destination();
    delete v;
}
