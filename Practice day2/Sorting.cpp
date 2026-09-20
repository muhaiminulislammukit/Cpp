#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numberOfElements;
    cin >> numberOfElements;

    vector<int> numbers(numberOfElements);
    for (int &number : numbers)
    {
        cin >> number;
    }

    for (int pass = 0; pass < numberOfElements - 1; ++pass)
    {
        for (int index = 0; index < numberOfElements - pass - 1; ++index)
        {
            if (numbers[index] > numbers[index + 1])
            {
                swap(numbers[index], numbers[index + 1]);
            }
        }
    }

    for (int number : numbers)
    {
        cout << number << ' ';
    }
    cout << '\n';

    return 0;
}