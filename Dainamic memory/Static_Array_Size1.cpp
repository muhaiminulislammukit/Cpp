#include<bits/stdc++.h>
using namespace std;
int main ()
{    
    int a[3];
    for (int i = 0; i < 3; i++){
         cin >> a[i];
    }
    int b[5];
    for(int i = 0; i< 5; i++){
        b[i] = a[i];
    }
    b[4] = 40;
    b[5] = 50;
    for(int i = 0; i < 3; i++)
    {
        cout<< a[i] << " " <<endl;
    }
 
    return 0;
}