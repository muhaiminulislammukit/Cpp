#include <bits/stdc++.h>
using namespace std;

vector<int> sort_it(int N)
{
    vector<int> numbers(N);
    for (int &number : numbers)
    {
        cin >> number;
    }

    sort(numbers.begin(), numbers.end(), greater<int>());
    return numbers;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> sorted_numbers = sort_it(n);
    for (int i = 0; i < n; ++i)
    {
        if (i > 0)
        {
            cout << ' ';
        }
        cout << sorted_numbers[i];
    }
    cout << '\n';

    return 0;
}