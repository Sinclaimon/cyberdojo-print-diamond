// The starting files are unrelated to the exercise.
//
// They simply show syntax for writing and testing
//  o) a global function
//  o) an instance method
// Pick the style that best fits the exercise.
// Then delete the other one, along with this comment!

#include "print_diamond.hpp"
#include <iostream>

std::string print_diamond(char max_char)
{
    if (max_char < 'A') {
        throw std::invalid_argument("Input must be a printable character after 'A'.");
    }

    std::string result;
    int n = max_char - 'A';  // Number of steps from 'A'

    for (int i = 0; i <= n; ++i) {
        char letter = 'A' + i;
        int first_spaces = n - i;
        int middle_spaces = 2 * i - 1;

        std::string line(first_spaces, ' ');
        line += letter;

        if (i > 0) {
            line += std::string(middle_spaces, ' ');
            line += letter;
        }

        line += "\n";
        result += line;
    }

    for (int i = n - 1; i >= 0; --i) {
        char letter = 'A' + i;
        int first_spaces = n - i;
        int middle_spaces = 2 * i - 1;

        std::string line(first_spaces, ' ');
        line += letter;

        if (i > 0) {
            line += std::string(middle_spaces, ' ');
            line += letter;
        }

        line += "\n";
        result += line;
    }

    return result;
}