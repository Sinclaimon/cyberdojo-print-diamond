#include <gtest/gtest.h>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <print_diamond.hpp>

class DiamondTest : public ::testing::TestWithParam<char> {
    
    TEST(PrintDiamond, HandlesAllUppercaseLetters) {
        for(char c = 'A'; c <= 'Z'; ++c) {
            SCOPED_TRACE(::testing::Message() << "Testing letter: " << c);
            std::string diamond = print_diamond(c);
            ASSERT_FALSE(diamond.empty()) <<"Failed for letter: " << c;
            
            int expected_lines = 2* (c - 'A') + 1;
            std::istringstream iss(diamond);
            std::vector<std::string> lines;
            std::string line;
            while (std::getline(iss, line)) {
                while (!line.empty() && line.back() == ' ')
                    line.pop_back();
                lines.push_back(line);
            }
            
            EXPECT_EQ(lines.size(), expected_lines) << "Line count mismatch for letter: " << c;
            
            for (size_t i = 0; i < lines.size(); ++i) {
                std::string reversed = lines[i];
                std::reverse(reversed.begin(), reversed.end());
                EXPECT_EQ(lines[i], reversed) << "Asymmetry in line: " << i << "for letter " << c;
            }
        }
};