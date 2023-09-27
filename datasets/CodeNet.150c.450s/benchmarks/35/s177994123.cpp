#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
int a[5001];
int main(){
    int n;
    while(cin >> n && n){
        rep(i, n) cin >> a[i];
        int ans = -INF;
        REP(i, 0, n){
            int sum = a[i];
            ans = max(ans, sum);
            REP(j, i + 1, n){
                sum += a[j];
                ans = max(ans, sum);
            }
        }
        cout << ans << endl;
    }
    return 0;
}