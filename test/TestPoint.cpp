#include <Point.hpp>
#include <gtest/gtest.h>

TEST(TestPoint, TestConstructeur) {
    Point pointNul{ 0, 0 };
    Point pointXPositif{ 1, 0 };
    Point pointYPositif{ -1, 0 };

    ASSERT_EQ(0, pointNul.X());
    ASSERT_EQ(0, pointNul.Y());
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    //Point pointNul {0,0};
}
