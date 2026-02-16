//
// Created by decla on 2/12/2026.
//
//strcmp_case_insensitive
#include "strcmp_case_insensitive.hpp"

#include <string>
#include <cctype>
#include <iostream>
#include <ostream>
using namespace std;

int strcmp_case_insensitive(std::string firstWord, std::string secondWord) {
    string temp1 = firstWord;
    string temp2 = secondWord;
    int num1;
    int num2;
    int maxLength;

    //if there's a # at the start
    if (isdigit(temp1[0]) && isdigit(temp2[0])) {
        for (int i = 0; isdigit(temp1[i]); i++) {
            num1 = stoi( temp1.substr(0, i+1));
        }
        for (int i = 0; isdigit(temp2[i]); i++) {
            num2 = stoi( temp2.substr(0, i+1));
        }
        //returns based off the starting #
        if (num1 > num2) { return 1; }
        else if (num1 == num2) {return 0;}
        else  { return -1; }
    }

    //sets to the larger length, so all of temp2 always gets checked
    maxLength = temp1.length() > temp2.length() ? temp1.length() : temp2.length();

    //compares the temp strings character by character after setting them to lower case
    for (int i = 0; i < maxLength+1; i++) {
        if (tolower(temp1[i]) > tolower(temp2[i])) {
            return 1;
        } else if (tolower(temp1[i]) < tolower(temp2[i])) {
            return -1;
        }
    }
    return 0;
}

int strcmp_case_insensitive(std::string firstWord, std::string secondWord, bool skipSpaces) {
    string temp1 = firstWord;
    string temp2 = secondWord;

    //removes any spaces from the temp version of the str
    if (skipSpaces) {
        for (int i = 0; i < temp1.length(); i++) {
            if (isspace(temp1[i])) {
                temp1.erase(i, 1);
            }
        }
        for (int i = 0; i < temp2.length(); i++) {
            if (isspace(temp2[i])) {
                temp2.erase(i, 1);
            }
        }
    }
    return strcmp_case_insensitive(temp1, temp2);
}

int strcmp_case_insensitive(std::string firstWord, std::string secondWord, bool skipSpaces, int maxLength) {
    string temp1 = firstWord;
    string temp2 = secondWord;

    return strcmp_case_insensitive(firstWord.substr(0,maxLength), secondWord.substr(0,maxLength), skipSpaces);
}