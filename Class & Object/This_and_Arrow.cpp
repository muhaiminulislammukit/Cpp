#include<bits/stdc++.h>
using namespace std;
class student {
    public:
    int roll;
    int cls;
    double gpa;
    student (int roll, int cls , double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    //    (*this) .roll = roll; 
    //    (*this) .cls = cls;
    //    (*this) .gpa = gpa;
    }
}; 
int main ()
{   
 
    student rahim(30, 9, 4.99);
    student karim(20, 9, 4.99);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}