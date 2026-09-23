#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int cls;
    char section;
    int id;
    int mathMarks;
    int englishMarks;
};

bool compareStudents(const Student &first, const Student &second)
{
    int firstTotal = first.mathMarks + first.englishMarks;
    int secondTotal = second.mathMarks + second.englishMarks;

    if (firstTotal != secondTotal)
    {
        return firstTotal > secondTotal;
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
