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

TEST(PrintDiamond, HandlesB)
{
    std::string expected = R"( A 
B B
 A 
)";
    std::string actual = print_diamond('B');
    EXPECT_EQ(actual, expected);
}


TEST(PrintDiamond, HandlesE)
{
    std::string expected = R"(    A    
   B B   
  C   C  
 D     D 
E       E
 D     D 
  C   C  
   B B   
    A    
)";
    std::string actual = print_diamond('E');
    EXPECT_EQ(actual, expected);
}


TEST(PrintDiamond, HandlesL)
{
    std::string expected = R"(           A           
          B B          
         C   C         
        D     D        
       E       E       
      F         F      
     G           G     
    H             H    
   I               I   
  J                 J  
 K                   K 
L                     L
 K                   K 
  J                 J  
   I               I   
    H             H    
     G           G     
      F         F      
       E       E       
        D     D        
         C   C         
          B B          
           A           
)";
    std::string actual = print_diamond('L');
    EXPECT_EQ(actual, expected);
}
