#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
int main(){
    for(int d; cin >> d; ){
        int ans = 0;
        for(int dd = d; dd <= 600 - d; dd += d)
          ans += d * dd * dd;
        cout << ans << endl;
    }
    return 0;
}