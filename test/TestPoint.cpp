#include <Point.hpp>
#include <gtest/gtest.h>

/**
 * Test si la construction des points se déroule bien.
 */
TEST(TestPoint, TestConstructeur) {
    Point pointNul{ 0, 0 };
    Point pointXPositif{ 1, 0 };
    Point pointYPositif{ -1, 0 };

    ASSERT_EQ(0, pointNul.X());
    ASSERT_EQ(0, pointNul.Y());
}

/**
 * Test le bon fonctionnement de l'opérateur == et !=.
 */
TEST(TestPoint, TestEgalite) {
    Point pointBase{ 1, 5 };
    Point pointYDifferent{ 1, 2 };
    Point pointXDifferent{ 2, 5 };
    Point pointToutDifferent{ 0, 23 };
    Point pointEgal{ 1, 5 };

    ASSERT_EQ(pointBase, pointEgal);
    ASSERT_NE(pointBase, pointYDifferent);
    ASSERT_NE(pointBase, pointXDifferent);
    ASSERT_NE(pointBase, pointToutDifferent);
}