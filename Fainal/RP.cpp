// Replace every occurrence of X in S with '#'.
#include <iostream>
#include <set>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int test_cases;
    std::cin >> test_cases;

    while (test_cases--)
    {
        std::string text;
        std::string pattern;
        std::cin >> text >> pattern;

        std::set<std::size_t> match_positions;
        std::size_t position = text.find(pattern);
        while (position != std::string::npos)
        {
            match_positions.insert(position);
            position = text.find(pattern, position + pattern.length());
        }

        for (auto match = match_positions.rbegin();
             match != match_positions.rend(); ++match)
        {
            text.replace(*match, pattern.length(), "#");
        }

        std::cout << text << '\n';
    }

    return 0;
}
