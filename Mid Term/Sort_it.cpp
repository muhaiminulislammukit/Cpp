#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> numbers(n);
    for (long long &number : numbers)
    {
        cin >> number;
    }

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < n; ++i)
    {
        if (i > 0)
        {
            cout << ' ';
        }
        cout << numbers[i];
    }
    cout << '\n';

    for (int i = n - 1; i >= 0; --i)
    {
        if (i < n - 1)
        {
            cout << ' ';
        }
        cout << numbers[i];
    }
    cout << '\n';

    return 0;
}