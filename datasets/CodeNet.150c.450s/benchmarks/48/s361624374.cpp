#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    ll e,x,y,z,m;
    while(cin>>e, e) {
        m = 1ll<<62;
        for(z = 0; z*z*z<=e; ++z) {
            for(y = 0; z*z*z+y*y<=e; ++y) {
                x = e - z*z*z - y*y;
                m = min(x+y+z, m);
            }
        }

        cout<<m<<endl;
    }
}