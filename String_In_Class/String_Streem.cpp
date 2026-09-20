#include<bits/stdc++.h>
using namespace std;
int main ()
{   string s;
    getline(cin,s);
    cout << s << endl;
    stringstream ss(s);
    string world;
    int cnt = 0;
    while(ss >> world){
       cout << world << endl; 
       cnt++;
    }
    cout << cnt << endl; 
 
    return 0;
}