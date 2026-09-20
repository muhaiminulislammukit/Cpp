#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string student_name, int student_roll, char student_section,
            int student_math_marks, int student_class)
        : name(student_name), roll(student_roll), section(student_section),
          math_marks(student_math_marks), cls(student_class)
    {
    }
};

int main()
{
    static Student student1("Sakib", 1, 'A', 85, 10);
    static Student student2("Rakib", 2, 'B', 92, 10);
    static Student student3("Akib", 3, 'C', 88, 10);

    Student highest = student1;
    if (student2.math_marks > highest.math_marks)
    {
        highest = student2;
    }
    if (student3.math_marks > highest.math_marks)
    {
        highest = student3;
    }

    cout << highest.name << '\n';
    return 0;
}
