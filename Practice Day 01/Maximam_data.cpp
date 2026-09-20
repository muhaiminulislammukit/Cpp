#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int N;
  cin >> N;
  int a[ N];
  for (int i = 0 ; i < N; i++){
    cin >> a[i];
  }

  int mx = INT_MIN;
  for (int i = 0 ;i < N; i++){
    mx = max(mx, a[i]);
    //if (mx < a[i]){
    // mx = a[i]};
  }
  cout << mx << endl;
    return 0;
}