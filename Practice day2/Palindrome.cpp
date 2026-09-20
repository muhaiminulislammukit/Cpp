#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numberOfElements;
    cin >> numberOfElements;

    vector<long long> numbers(numberOfElements);
    for (long long &number : numbers)
    {
        cin >> number;
    }

    bool isPalindrome = true;
    for (int left = 0, right = numberOfElements - 1; left < right; ++left, --right)
    {
        if (numbers[left] != numbers[right])
        {
            isPalindrome = false;
            break;
        }
    }

    cout << (isPalindrome ? "YES" : "NO") << '\n';
    return 0;
}