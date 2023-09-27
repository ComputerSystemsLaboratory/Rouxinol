#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
using ll = long long;

#define N 1000007
ll s[N], t[N];

int main() {

    for(ll i=0; i<N; ++i) s[i] = t[i] = 10000000;
    s[0] = t[0] = 0;
    for(ll i=0; i<N; ++i) {
        ll j = 1;
        while(i + j*(j+1)*(j+2)/6 < N) {
            ll p = j*(j+1)*(j+2)/6;
            s[i+p] = min(s[i]+1, s[i+p]);
            if(p % 2 == 1) {
                t[i+p] = min(t[i]+1, t[i+p]);
            }
            ++j;
        }
    }

    int n;
    while(cin >> n && n) {
        cout << s[n] << " " << t[n] << endl;
    }

    return 0;
}