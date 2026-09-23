#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int cnt[26] = {0};
    for (char ch : s) {
        char c = tolower(ch);
        if (c >= 'a' && c <= 'z') {
            cnt[c - 'a']++;
        }
    }

    string word = "egypt";
    int ans = INT_MAX;
    for (char ch : word) {
        ans = min(ans, cnt[ch - 'a']);
    }

    cout << ans << '\n';
    return 0;
}
