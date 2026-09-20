 #include<bits/stdc++.h>
 using namespace std;
 int main ()
 {
    int firstNumber, secondNumber;
    char comparisonSymbol;
    cin >> firstNumber >> comparisonSymbol >> secondNumber;

    bool isCorrect = (comparisonSymbol == '<' && firstNumber < secondNumber) ||
                  (comparisonSymbol == '>' && firstNumber > secondNumber) ||
                  (comparisonSymbol == '=' && firstNumber == secondNumber);

    cout << (isCorrect ? "Right" : "Wrong") << '\n';
     return 0;
 }