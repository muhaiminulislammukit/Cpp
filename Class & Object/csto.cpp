#include<bits/stdc++.h>
using namespace std;
class student {
    public:
    int roll;
    int cls;
    double gpa;
    // student (int r, int c, double g){
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }
}; 
int main ()
{   
    //   int r;
    //   int c;
    //   double g;
    //   cin >> r >> c >> g;
    // student rahim(r, c, g);
    student rahim;
    cin >> rahim.roll >> rahim.cls >> rahim.gpa;
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;    
    return 0;
}