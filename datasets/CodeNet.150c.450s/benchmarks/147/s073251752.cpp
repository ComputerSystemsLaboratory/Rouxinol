#include "bits/stdc++.h"
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int f[10005];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int x = 1; x*x <= n; ++x){
        for(int y = 1; x*x + y*y + x*y <= n; ++y){
            for(int z = 1; x*x + y*y + z*z + x*y + y*z + z*x <= n; ++z){
                ++f[x*x + y*y + z*z + x*y + y*z + z*x];
            }
        }
    }
    for(int i = 1; i <= n; ++i) cout << f[i] << endl;
    return 0;
}
