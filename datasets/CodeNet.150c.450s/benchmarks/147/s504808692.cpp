#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, c, maxxyz, x, y, z, val;
    cin >> n;
    int a [n];
    for ( int i = 0; i < n; i ++) {
        a[i] = 0;
    }
    maxxyz = sqrt(n-5);
    for  ( x = 1; x <= maxxyz; x++){
            for ( y = 1; y <= maxxyz; y++) {
                for ( z = 1; z <= maxxyz; z++) {
                    val =x*x + y*y + z*z + x*y + y*z + z*x;
                    if ( val <= n) a[val-1]++;
            }
        }
    }
    for ( int i = 0; i < n; i ++) {
        cout << a[i] <<endl;
    }
}