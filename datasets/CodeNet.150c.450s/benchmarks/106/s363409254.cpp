#include<iostream>
using namespace std;
int main(){
    int a, b, c, x, y = 0; ;
    cin >> a >> b >> c;
    for ( x = a; x <= b; x++ ){
        if ( c % x == 0 ){
            y = y + 1;
        }
    }
    cout << y << endl;
    return 0;
}

