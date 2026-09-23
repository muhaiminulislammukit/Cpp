#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
    int n;
    cin >> n;

    vector<Student> students(n);

    for (Student &student : students)
    {
        cin >> student.name >> student.cls >> student.section >> student.id;
    }

    for (int left = 0, right = n - 1; left < right; ++left, --right)
    {
        swap(students[left].section, students[right].section);
    }

    for (const Student &student : students)
    {
        cout << student.name << ' '
             << student.cls << ' '
             << student.section << ' '
             << student.id << '\n';
    }

    return 0;
}
