#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool yn;
    cin >> a >> b >> c;
    yn = a >= b ? false : b >= c ? false : true;
    if( yn ) cout << "Yes" << endl;
    else cout << "No" << endl;
}