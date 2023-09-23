#include <iostream>
using namespace std;
int main(void){
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;

    int swp = 0;
    
    if( a > b ){
        swp = b;
        b = a;
        a = swp;
    }
    
    if( b > c ){
        swp = c;
        c = b;
        b = swp;
    }
    
    if( a > b ){
        swp = b;
        b = a;
        a = swp;
    }

    cout << a << " " << b << " " << c << endl;
}