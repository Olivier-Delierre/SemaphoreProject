#include <Voiture.hpp>
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
        Point position{ 0, 1 };
        Point destination{ 2, 1 };
        Voiture v{ position, destination };
}