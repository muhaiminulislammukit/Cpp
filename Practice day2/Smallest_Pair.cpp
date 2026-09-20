#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int numberOfElements;
        cin >> numberOfElements;

        vector<long long> numbers(numberOfElements);
        for (long long &number : numbers)
        {
            cin >> number;
        }

        long long smallestResult = LLONG_MAX;
        for (int first = 0; first < numberOfElements; ++first)
        {
            for (int second = first + 1; second < numberOfElements; ++second)
            {
                smallestResult = min(smallestResult,
                                     numbers[first] + numbers[second] + second - first);
            }
        }

        cout << smallestResult << '\n';
    }

    return 0;
}