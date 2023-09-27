#pragma GCC optimize("O2")
#include<iostream>
using namespace std;
#define f(x,y,z) for(int x=y;x<z;++x)
int h, h1, h2, n, c, l, r, t, z;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    cin >> n;
    f(i,1,n+1) {
        h = h1 = h2 = 0;
        for(int x = 1; x*x+x+x+2 < i; ++x) {
            for(int y = x; x*x+y*y+x*y+x+y < i; ++y) {
                z = y;
                while(x*x+y*y+z*z+x*y+y*z+z*x < i) ++z;
                if(x*x+y*y+z*z+x*y+y*z+z*x == i) {
                    if(x == y || y == z || z == x) {
                        if(x == y && y == z && z == x) ++h2;
                        else ++h1;
                    } else ++h;
                }
            }
        }
        cout << h*6+h1*3+h2 << '\n';
    }
    // cout << c << '\n';
}