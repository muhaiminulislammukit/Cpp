#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    while (getline(cin, line))
    {
        line.erase(remove(line.begin(), line.end(), ' '), line.end());
        sort(line.begin(), line.end());
        cout << line << '\n';
    }

    return 0;
}