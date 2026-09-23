#include <bits/stdc++.h>

using namespace std;

int countWord(const string &sentence, const string &target)
{
    stringstream words(sentence);
    string word;
    int count = 0;

    while (words >> word)
    {
        if (word == target)
        {
            ++count;
        }
    }

    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string sentence;
    string target;

    getline(cin, sentence);
    getline(cin, target);

    cout << countWord(sentence, target) << '\n';

    return 0;
}
