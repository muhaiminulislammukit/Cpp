#include<bits/stdc++.h>
using namespace std;
int main ()
{   
   int *a = new int [6];            // Dynamically allocated array.

    for (int i = 0; i < 6; i++){
        cin >> a[i];
    }
    for (int i = 0; i < 6; i++){
        cout << a[i] << " ";
    }
 
    return 0;
}