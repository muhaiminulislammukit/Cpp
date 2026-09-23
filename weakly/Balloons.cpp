#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> seen;
        int total = 0;

        for (char ch : s) {
            if (seen.insert(ch).second) {
                total += 2;
            } else {
                total += 1;
            }
        }

        cout << total << '\n';
    }

    return 0;
}
