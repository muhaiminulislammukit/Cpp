#include<bits/stdc++.h>
using namespace std;
class cricketer {
    public:
    string country;
    int jersey;

    cricketer(string country , int jersey){
        this->country = country;
        this->jersey = jersey;

    }
};
int main ()
{
     cricketer* dhoni  = new ("bangladesh ",69);
     cricketer* kholi  = new ("bangladesh ",69);
    *kholi = *dhoni;
         delete dhoni;

     cout << dhoni->jersey << kholi->jersey << endl;

    return 0;
}