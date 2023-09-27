#include<iostream>
using namespace std;

int main()
{
    int n, d = 100000;
    cin >> n;
    for(; n-- ;)
    {
       if(int(d*1.05)%1000 == 0) d = (int)d*1.05;
       else
       {
            d = (int)d*1.05 + (1000- int(d*1.05)%1000);
       }
    }
    cout << d << endl;
}