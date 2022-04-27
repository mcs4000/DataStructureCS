#include <gtest/gtest.h>
#include <iostream>
#include "node.hpp"

using namespace std;

/**
 * @brief Test fixture class for int
 */
struct NodeDataTestInt : testing::Test
{
    NodeData<int> *nd;
    void SetUp() { nd = new NodeData<int>();};
    void TearDown(){ delete nd;}
};

/**
 * @brief Test fixture class for float
 */
struct NodeDataTestFloat : testing::Test
{
    NodeData<float> *nd;
    void SetUp(){nd = new NodeData<float>();};
    void TearDown(){delete nd;};
};

/**
 * @brief Construct a new test for integer type node data
 */
TEST_F( NodeDataTestInt, Subtest_Int )
{
    nd->setData(7);
    ASSERT_EQ(nd->getData(), 7);
}

/**
 * @brief Construct a new test float type node data
 */
TEST_F( NodeDataTestFloat, Subtest_Float)
{
    nd->setData(3.14159);
    ASSERT_LT(abs(nd->getData() - 3.14159), 0.0005);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
