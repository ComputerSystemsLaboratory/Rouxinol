#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;

const ll MOD = ll(1e9 + 7);
const ll LLINF = LLONG_MAX;
const int IINF = 99999999;
const int MAX_N = int(1e5) + 5;
const double EPS = 1e-8;
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)

int main() {
    while(1){
        int m,nmin,nmax,p[201];
        cin >> m >> nmin >> nmax;
        if(m==0)break;
        for(int i=0;i<m; i++){
            cin >> p[i];
        }
        int ans=nmin,dmax=0;
        for(int i=nmin;i<=nmax;i++){
            if(p[i-1]-p[i]>=dmax){
                ans = i;
                dmax = p[i-1]-p[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}

