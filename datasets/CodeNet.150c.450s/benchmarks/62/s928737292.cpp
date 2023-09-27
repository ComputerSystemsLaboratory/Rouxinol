#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
    int a, b, c, tmp1, tmp2;
    cin >> a >> b >> c ;
    if (a < 1 || a > 10000)
        return 0;
    if (b < 1 || b > 10000)
        return 0;
    if (c < 1 || c > 10000)
        return 0;       
    if ( a > b && a > c) {
        if (b > c) {
            cout << c << " " << b  << " " << a << endl;
            return 0;
        } else {
            cout << b << " " << c << " " << a << endl;
            return 0;
        }
    } else if ( b > a && b > c) {
        if (a > c) {
            cout << c << " " << a  << " " << b << endl;
            return 0;
        } else {
            cout << a << " " << c << " " << b << endl;
            return 0;
        }
    } else if ( a > b) {
        cout << b << " " << a << " " << c << endl;
    } else {
        cout << a << " " << b << " " << c << endl;
    }
}
