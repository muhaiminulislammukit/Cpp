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
student fun(){
  student rahim(30, 9, 4.99); // This is static object
  return rahim;
}
int main ()
{   
   student  obj = fun();

    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}