#include <Carrefour.hpp>

#include <vector>
#include <iostream>

#include <gtest/gtest.h>

/**
 * Test le bon fonctionnement du constructeur des voitures.
 */
TEST(TestVoiture, TestConstructeur) {
    Point position{ 0, 1 };
    Point destination{ 2, 1 };
    Voiture v{ position, destination };

    ASSERT_EQ(v.Position(), position);
    ASSERT_EQ(v.Destination(), destination);
}

/**
 * Test le bon fonctionnement de la fonction "Avancer" des voitures.
 */
TEST(TestVoiture, TestAvancer) {
    std::vector<std::vector<Voiture>> voitures(4, std::vector<Voiture>());

    std::vector<Point> positions;
    positions.push_back(Carrefour::Nord);
    positions.push_back(Carrefour::Est); 
    positions.push_back(Carrefour::Sud);
    positions.push_back(Carrefour::Ouest);

    Point centre{ 1, 1 };

    for (long unsigned int i = 0; i < positions.size(); i++) {
        for (long unsigned int j = i + 1; j < 4 + i; j++) {
            voitures[i].push_back(Voiture { positions[i], positions[j % 4] });
        }
    }

    auto vect = voitures.begin();
    for (; vect != voitures.end(); vect++) {
        auto voiture = vect->begin();
        for (; voiture != vect->end(); voiture++) {
            voiture->Avancer();
            ASSERT_EQ(Carrefour::Centre, voiture->Position());

            voiture->Avancer();
            ASSERT_EQ(voiture->Destination(), voiture->Position());
        }
    }
}