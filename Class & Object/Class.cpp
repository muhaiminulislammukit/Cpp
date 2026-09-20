#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    char name[100];
    int roll;
    double gpa;
};
int main ()
{   student a;
    a.roll = 30;
    a.gpa = 3.58;
    char temp[100] = "shakil";
    strcpy(a.name,temp);
    cout << a.name << " " << a.roll << " " << a.gpa <<endl;
    return 0;
}