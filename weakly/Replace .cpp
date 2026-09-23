#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string result;
    for (int i = 0; i < (int)s.size();)
    {
        if (i + 4 <= (int)s.size() && s.substr(i, 5) == "EGYPT")
        {
            result.push_back(' ');
            i += 5;
        }
        else
        {
            result.push_back(s[i]);
            i++;
        }
    }

    cout << result << '\n';
    return 0;
}
