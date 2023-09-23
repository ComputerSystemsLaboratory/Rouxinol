#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)

int a[5010];
long long int s[5010];
int main(void){
    int n;
    while(cin >> n && n) {
        rep(i, n) cin >> a[i];
        s[0] = 0;
        rep(i, n) s[i+1] = a[i]+s[i];
        long long int ans = numeric_limits<long long int>::min();
        rep(i, n+1) {
            for(int j=i+1; j<n+1; ++j) {
                ans = max(ans, s[j]-s[i]);
            }
        }
        cout << ans << endl;
    }
}