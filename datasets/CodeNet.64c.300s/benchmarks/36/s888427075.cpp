#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int a=0,b=0,c=0;
    cin >> a;
    cin >> b;
    cin >> c;
    if((a<=b) && (a<=c) && (b<=c)){
        cout << a << ' ' << b << ' ' << c << endl;//abc
    }
    else if((a<=b) && (a<=c) && (c<=b)){
        cout << a << ' ' << c << ' ' << b << endl;//acb
    }
    else if((b<=a) && (b<=c) && (a<=c)){
        cout << b<< ' '  << a << ' ' << c << endl;//bac
    }
    else if((b<=a) && (b<=c) && (c<=a)){
        cout << b << ' ' << c << ' ' << a << endl;//bca
    }
    else if((c<=a) && (c<=b) && (a<=b)){
        cout << c << ' ' << a << ' ' << b << endl;//cab
    }
    else {
        cout << c << ' ' << b << ' ' << a << endl;//cba
    }

}