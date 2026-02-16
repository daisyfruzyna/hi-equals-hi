#include <iostream>
#include <stdlib.h>
#include "src/hello.hpp"
#include "src/strcmp_case_insensitive.hpp"

using namespace std;

int main() {
  // Your driver program goes here
  string firstWord;
  string secondWord;
  int maxChar = -1;
  char userSelect;
  bool skipSpaces;

  cout << "What is the first word? ";
  getline(cin, firstWord);
  cout << "What is the second word? ";
  getline(cin, secondWord);
  while (userSelect != 'y' && userSelect != 'n') {
    cout << "Want to skip spaces? \'y/n\'";
    cin >> userSelect;
  }
  skipSpaces = (userSelect == 'y');

  cout << "Want set a max # of characteres? \'#/-1 to skip\'";
  cin >> maxChar;


  // cout << firstWord.substr(0, maxChar) << endl;
  // cout << secondWord.substr(0, maxChar) << endl;
  // cout << skipSpaces << endl;
  // cout << maxChar << endl;

  cout << "The comparison of \"" << firstWord <<"\" and \"" << secondWord << "\" returns " << strcmp_case_insensitive(firstWord, secondWord, skipSpaces, maxChar) << endl;

  //hardcoded examples
  string str1[] = {"String one", "String one", "String two"};
  string str2[] = {"string two", "string one", "string one"};
  cout << endl << "Hardcoded examples" << endl;
  cout << R"(The comparison of "String one" and "string two" returns )" << strcmp_case_insensitive(str1[0], str2[0], false) << endl;
  cout << R"(The comparison of "String one" and "string one" returns )" << strcmp_case_insensitive(str1[1], str2[1], false) << endl;
  cout << R"(The comparison of "String two" and "string one" returns )" << strcmp_case_insensitive(str1[2], str2[2], false) << endl;



}
