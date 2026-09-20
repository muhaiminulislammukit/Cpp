#include<bits/stdc++.h>
using namespace std;
class student {
public:
    int roll;
    int cls;
    double gpa;
    student(int r, int c, double g){
        
        roll = r;
        cls = c;
        gpa = g;
     
    }
};
int main ()
{
    student rahim(45 , 10, 4.77);
    student karim(34, 9, 4.80);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}