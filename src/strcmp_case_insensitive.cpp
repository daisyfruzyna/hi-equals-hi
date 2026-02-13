//
// Created by decla on 2/12/2026.
//
//strcmp_case_insensitive
#include "strcmp_case_insensitive.hpp"

#include <string>
#include <cctype>
using namespace std;

int strcmp_case_insensitive(std::string firstWord, std::string secondWord) {
    string temp1 = firstWord;
    string temp2 = secondWord;

    for (int i = 0; i < temp1.length(); i++) {
        if (tolower(temp1[i]) > tolower(temp2[i])) {
            return 1;
        } else if (tolower(temp1[i]) < tolower(temp2[i])) {
            return -1;
        }
    }
    return 0;
}
