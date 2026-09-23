#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student a, Student b)
{
    // Marks বেশি হলে আগে
    if (a.marks != b.marks)
    {
        return a.marks > b.marks;
    }

    // Marks same হলে roll ছোট হলে আগে
    return a.roll < b.roll;
}

int main()
{
    int n;
    cin >> n;

    Student a[n];

    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    // Sort
    sort(a, a + n, cmp);

    // Output
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " "
             << a[i].roll << " "
             << a[i].marks << endl;
    }

    return 0;
}