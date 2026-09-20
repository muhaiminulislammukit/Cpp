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
    
    }
}; 

int main ()
{   
   student rahim(3, 9, 4.99);
  student* karim= new student(4 ,9,4.55) ;
    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    return 0;
}