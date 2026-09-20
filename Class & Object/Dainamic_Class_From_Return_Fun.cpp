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
student* fun(){
  student rahim(3, 9, 4.99);
  student *p = &rahim;
  return p;
}
int main ()
{   
   student *p = fun();

    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}