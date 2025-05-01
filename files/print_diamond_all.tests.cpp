#include <gtest/gtest.h>
#include <string>
#include <print_diamond.hpp>

class DiamondTest : public ::testing::TestWithParam<char> {
    
    TEST_P(DiamondTest, GeneratesSymmetricDiamond) {
        for(char c = 'A'; c <= 'Z'; ++c) {
            std::string diamond = print_diamond(c);
            ASSERT_FALSE(diamond.empty()) <<"Failed for letter: " << c;
            
            int expected_lines = 2* (c - 'A') + 1;
            std::istringstream iss(diamond);
            std::vector<std::string> lines;
            std::string line;
            while (std::getline(iss, line)) {
                lines.push_back(line);
            }
            
            EXPECT_EQ(lines.size(), expected_lines) << "Line count mismatch for letter: " << c;
        }
};