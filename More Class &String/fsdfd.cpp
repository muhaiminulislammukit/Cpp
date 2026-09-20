#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int roll;
    int math;
    int english;

    student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void total()
    {
        cout << "Total marks of " << name << " = "
             << math + english << endl;
    }
};

int main()
{
    student sakib("Sakib Ahammed", 23, 69, 90);
    sakib.total();

    student Rakib("Rakib Ahammed", 25, 67, 90);
    Rakib.total();

    return 0;
}