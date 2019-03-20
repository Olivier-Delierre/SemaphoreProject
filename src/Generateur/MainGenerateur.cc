#include "../Voiture.hpp"
#include <vector>
#include <iostream>

int main() {
    std::vector<Voiture*> voitures;
    int i = 0;

    while (true) {
        voitures.push_back(new Voiture());
        std::cout << voitures[i]->Position() << " => " << voitures[i++]->Destination() << std::endl;
    }
}