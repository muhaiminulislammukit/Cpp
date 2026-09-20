#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int firstNumber, secondNumber, givenResult;
    char operation, equalsSign;
    cin >> firstNumber >> operation >> secondNumber >> equalsSign >> givenResult;

    int expectedResult;
    if (operation == '+') {
        expectedResult = firstNumber + secondNumber;
    } else if (operation == '-') {
        expectedResult = firstNumber - secondNumber;
    } else {
        expectedResult = firstNumber * secondNumber;
    }

    if (expectedResult == givenResult) {
        cout << "Yes\n";
    } else {
        cout << expectedResult << '\n';
    }

    return 0;
}