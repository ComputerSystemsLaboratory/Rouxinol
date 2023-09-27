#include <iostream>
#include<math.h>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
    int  a=0,c=0,i=0,n=0;
    cin >> a;
    cout << a << ":";
    i=2;
    n=a;
    while(i<=sqrt(a)){
        while(n%i==0){
            n=n/i;
            cout <<' '<< i;
            c++;
        }
        i++;
    }
    if(n>sqrt(a) && n<a)cout << ' '<<n;
    if(a==n)cout << ' ' << a;
    cout << endl;
    //cout << b;
}