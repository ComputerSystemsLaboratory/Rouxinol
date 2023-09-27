#include <iostream>
using namespace std;
int main(void){
    int a, b, c, x, min, max;
    cin >> a >> b >> c; 
    if(b < a){
        x = a;
        a = b;
        b = x;
    }
    if(c < b){
        x = b;
        b = c;
        c = x;
    }
    if(b < a){
        x = a;
        a = b; 
        b = x;
    }
    cout << a << " " << b << " " << c;
    cout << endl;
}

