#include <iostream>
using namespace std;

int main() {
    int x, y;
    while( true ) {
        cin >> x >> y;
        if( x == 0 && y == 0 ) break;
        switch( x > y ) {
            case 0: cout << x << " " << y << endl; break;
            case 1: cout << y << " " << x << endl; break;
        }
    }
}