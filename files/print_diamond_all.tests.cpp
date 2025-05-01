#include <gtest/gtest.h>
#include <string>
#include <print_diamond.hpp>
#include <>

class DiamondTest : public ::testing::TestWithParam<char> {
    
    INSTANTIATE_TEST_SUITE(
        AllUppercaseLetters,
        DiamondTest,
        ::testing::Values(
            a,b,c,d,e,f,g,h,i)
    
    TEST(PrintDiamond, HandlesAllUppercaseLetters) {
        for(char c = 'A'; c <= 'Z'; ++c) {
            std::string diamond = print_diamond(c);
            ASSERT_FALSE(diamond.empty()) <<"Failed for letter: " << c;
        }
};

