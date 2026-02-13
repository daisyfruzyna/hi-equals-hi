#include <iostream>
#include <stdlib.h>
#include "src/hello.hpp"
#include "src/strcmp_case_insensitive.hpp"

using namespace std;

int main() {
  // Your driver program goes here
  std::string firstWord;
  std::string secondWord;
  std::cout << "What is the first word? ";
  std::cin >> firstWord;
  std::cout << "What is the second word? ";
  std::cin >> secondWord;
  std::cout << "The comparison of \"" << firstWord <<"\" and \"" << secondWord << "\" returns " << strcmp_case_insensitive(firstWord, secondWord) << "\n";

   int i = strcmp_case_insensitive(firstWord, secondWord);

    //hardcoded tests
   std::string str1[] = {"String one", "String one", "String two"};
   std::string str2[] = {"string two", "string one", "string one"};
   std::cout << "The comparison of \"String one\" and \"string two\" returns " << strcmp_case_insensitive(str1[0], str2[0]) << "\n";
   std::cout << "The comparison of \"String one\" and \"string one\" returns " << strcmp_case_insensitive(str1[1], str2[1]) << "\n";
   std::cout << "The comparison of \"String two\" and \"string one\" returns " << strcmp_case_insensitive(str1[2], str2[2]) << "\n";
// return 0;


  //user inputs 2 diff strings
  // OR
  //hard code a few different strings

}
