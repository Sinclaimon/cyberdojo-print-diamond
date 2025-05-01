#include "print_diamond.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(PrintDiamond, HandlesA)
{
    std::string expected = "A\n";
    std::string actual = print_diamond('A');
    EXPECT_EQ(actual, expected);
}

TEST(PrintDiamond, HandlesC)
{
    std::string expected = R"(  A  
 B B 
C   C
 B B 
  A  
)";
    std::string actual = print_diamond('C');
    EXPECT_EQ(actual, expected);
}