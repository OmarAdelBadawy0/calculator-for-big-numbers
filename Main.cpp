// Project: Calculator accepts big decimal numbers and performs basic arithmetic operations
// Author: Omar Adel
// Date: 20/10/2022
// Version: 1.6
// Description: The program accepts two big decimal numbers and performs arithmetic operations on them like addition, subtraction, multiplication, comparison.


#include <iostream>
#include <string>
#include "Functions.cpp"

using namespace std;

int main()
{
    string sign, num1, num2;
    BigDecimalInt c1, c2, c3;
    regex matching("(-|\\+)?[0-9]+");
    cin >> num1 >> sign >> num2;
    if (!regex_match(num1, matching) || !regex_match(num2, matching))
    {
        cout << "Invalid input !";
        return 0;
    }
    else
    {
        c1 = num1;
        c2 = num2;
    }

    printResult(c1, sign, c2);
}
