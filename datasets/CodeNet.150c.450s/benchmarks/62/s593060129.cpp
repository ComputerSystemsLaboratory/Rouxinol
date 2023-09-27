#include<iostream>
    
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c;

    if(a > b){
        d = a;
        a = b;
        b = d;
    }
    if(!(c > a)){
        cout << c << " " << a << " " << b << endl;
    }else if(!(b > c)){
        cout << a << " " << b << " " << c << endl;
    }else{
        cout << a << " " << c << " " << b << endl;
    }

    return 0;
}