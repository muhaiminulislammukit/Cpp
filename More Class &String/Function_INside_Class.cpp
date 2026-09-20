#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int math;
    int english;
    student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
        this->math =math;
        this->english =english;

    }
    void hello()
    {
        cout << "Hello from  " << name << endl;
    }
};
int main()
{
    student sakib("Sakib Ahammed", 23);
    sakib.hello();
    student Rakib("Rakib Ahammed", 25);
    Rakib.hello();
    return 0;
}