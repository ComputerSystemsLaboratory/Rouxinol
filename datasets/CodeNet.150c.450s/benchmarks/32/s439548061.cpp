#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize "O3"
#define rep(i,a,n) for(long long i=a; i<n; i++)
typedef long long ll;
typedef pair<int,int> P;
const ll MOD = (int)1e9+7;
const ll INF = MOD*MOD;
const double EPS = 1e-9;
const ll powll = 1LL<<1;

int main(void){
   int m, nmin, nmax;
   
   while(1){
        cin >> m >> nmin >> nmax;
        if(m == 0) break;
        int ans = 0;
        int dif = 0;
        int p[m];
        rep(i,0,m){
            cin >> p[i];
        }
        sort(p,p+m);
        rep(i,nmin, nmax+1){
            int pmin = MOD;
            int pmax = 0;
            rep(j,0,m-i){
                pmax = max(pmax,p[j]);
            }
            rep(j,m-i, m){
                pmin = min(pmin, p[j]);
            }
            if((pmin-pmax) >= dif && i > ans){
                dif = pmin-pmax;
                ans = i;
            }
        }
        cout << ans << "\n";
   }
}
