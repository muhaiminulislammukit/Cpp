#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int cls;
    char section;
    long long id;
    int mathMarks;
    int englishMarks;
};

bool compareStudents(const Student &first, const Student &second)
{
    if (first.englishMarks != second.englishMarks)
    {
        return first.englishMarks > second.englishMarks;
    }

    if (first.mathMarks != second.mathMarks)
    {
        return first.mathMarks > second.mathMarks;
    }

    return first.id < second.id;
}

int main()
{
    int n;
    cin >> n;

    vector<Student> students(n);

    for (Student &student : students)
    {
        cin >> student.name >> student.cls >> student.section >> student.id >> student.mathMarks >> student.englishMarks;
    }

    sort(students.begin(), students.end(), compareStudents);

    for (const Student &student : students)
    {
        cout << student.name << ' '
             << student.cls << ' '
             << student.section << ' '
             << student.id << ' '
             << student.mathMarks << ' '
             << student.englishMarks << '\n';
    }

    return 0;
}
