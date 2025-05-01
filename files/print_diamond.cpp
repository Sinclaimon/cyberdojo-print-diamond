// The starting files are unrelated to the exercise.
//
// They simply show syntax for writing and testing
//  o) a global function
//  o) an instance method
// Pick the style that best fits the exercise.
// Then delete the other one, along with this comment!

#include "print_diamond.hpp"
#include <iostream>

std::string print_diamond(char max_letter)
{
    if (max_letter == 'A') return "A\n";
    
    int n = max_letter - 'A';
    
    std::string result;
    
    //top part
    for (int i = 0; i <= n; ++i)
    {
        char letter = 'A' + i;
        int first_spaces = n - i;
        int middle_spaces = 2 * i - 1;
        
        std::string line = std::string(first_spaces, ' ');
        line += letter;
        
        if (i > 0)
        {
            line += std::string(middle_spaces, ' ');
            line += letter;
        }
        
        
        int line_width = 2 * n + 1;
        while (int<line.length()> < line_width) 
        {
            line += ' ';
        }
        line += "\n";
        result += line;
        
    }
    
    //bottom part
    for (int i = n - 1; i >= 0; --i)
    {
        char letter = 'A' + i;
        int first_spaces = n - i;
        int middle_spaces = 2 * i - 1;
        
        std::string line = std::string(first_spaces, ' ');
        line += letter;
        
        if (i > 0)
        {
            line += std::string(middle_spaces, ' ');
            line += letter;
        }
        
        
        int line_width = 2 * n + 1;
        while (line.length() < line_width) 
        {
            line += ' ';
        }
        line += "\n";
        result += line;
        
    }
    
    return result;
}
