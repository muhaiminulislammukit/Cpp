#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string results;
    cin >> n >> results;

    int antonWins = count(results.begin(), results.end(), 'A');
    int danikWins = n - antonWins;

    if (antonWins > danikWins)
    {
        cout << "Anton\n";
    }
    else if (danikWins > antonWins)
    {
        cout << "Danik\n";
    }
    else
    {
        cout << "Friendship\n";
    }

    return 0;
}
