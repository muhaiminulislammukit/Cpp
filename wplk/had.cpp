#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int evenCount = 0;
        for (int i = 0; i < n; ++i)
        {
            int value;
            cin >> value;
            evenCount += (value % 2 == 0);
        }

        if (n % 2 == 1)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << abs(evenCount - n / 2) << '\n';
        }
    }

    return 0;
}
