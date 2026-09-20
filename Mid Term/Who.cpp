#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int id;
    string name;
    char section;
    int marks;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        Student best{};
        for (int i = 0; i < 3; ++i)
        {
            Student current;
            cin >> current.id >> current.name >> current.section >> current.marks;

            if (i == 0 || current.marks > best.marks ||
                (current.marks == best.marks && current.id < best.id))
            {
                best = current;
            }
        }

        cout << best.id << ' ' << best.name << ' ' << best.section << ' ' << best.marks << '\n';
    }

    return 0;
}