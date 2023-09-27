#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

int p[10001];
int main(void){
    int m, n_min, n_max;
    while(cin >> m >> n_min >> n_max && m) {
        rep(i, m) cin >> p[i];
        sort(p, p+m, greater<int>());
        int gap = 0;
        int ans = 0;
        for(int i=n_min; i<=n_max; ++i) {
            if(p[i-1]-p[i] >= gap) {
                gap = p[i-1]-p[i];
                ans = i;
            }
        }
        cout << ans << endl;
    }
}