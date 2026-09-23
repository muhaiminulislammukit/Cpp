#include <bits/stdc++.h>

using namespace std;

void printCharacters(int n, char character)
{
    for (int i = 0; i < n; ++i)
    {
        if (i > 0)
        {
            cout << ' ';
        }
        cout << character;
    }
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        char character;
        cin >> n >> character;
        printCharacters(n, character);
    }

    return 0;
}
