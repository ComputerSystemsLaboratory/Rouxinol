#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll LLINF = LLONG_MAX;
#define REP(i, n) for (int i = 0; i < n; i++)

int main(){
    ll n, a;
    while(1){
        cin >> n;
        if(n==0)break;
        ll sum = 0, ans = -LLINF, smin = 0;
        REP(i,n){
            cin >> a;
            sum += a;
            ans = max(ans, a);
            if(sum < smin){
                smin = sum;
            }
            else{
                ans = max(ans, sum-smin);
            }
        }
        cout << ans << endl;
    }
    return 0;
}

