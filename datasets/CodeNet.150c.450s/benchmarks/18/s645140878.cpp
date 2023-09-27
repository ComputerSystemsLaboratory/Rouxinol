#include<iostream>
using namespace std;

int main()
{
    int n, d = 100000;
    cin >> n;
    for(; n-- ;)
    {
       if((d + d*5/100)%1000 == 0) d = d + d*5/100;
       else
       {
            d = d + d*5/100 + (1000-(d + d*5/100)%1000);
       }
    }
    cout << d << endl;;
}