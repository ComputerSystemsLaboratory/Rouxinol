#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int s;
    cin >> a >> b >> c;
    for( ; a <= b; ++a ) {
        if( !( c % a ) ) ++s;
    }
    cout << s << endl;
}