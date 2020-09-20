// Author: Daniel Trenco
// Github: https://github.com/dtrenco/Exam01.git
// Sep 20, 2020
// CSIS 113a

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;
using String = std::string;

struct NumberPair {
    int number_01;
    int number_02;
};

int main () {

    NumberPair {1,2};

    int first_number;
    int second_number;


    std::cout << "Number " << 1 << ": ";
    std::cin >> first_number;
    std::cout << "Number " << 2 << ": ";
    std::cin >> second_number;

    int sum = first_number + second_number;

    std::cout << first_number << " + " << second_number << " = " << sum << endl;

    return 0;
};