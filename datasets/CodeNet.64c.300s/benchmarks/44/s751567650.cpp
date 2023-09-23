#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const ll MOD = 1000000007;
const int IINF = INT_MAX;
#define REP(i, n) for (int i = 0; i < n; i++)


int main() {
    ll n, d[15][15];
    while(cin >> n, n){
        REP(i,15)fill(d[i],d[i]+15,IINF);
        REP(i,n){
            ll a, b, c;
            cin >> a >> b >> c;
            d[a][b] = c;
            d[b][a] = c;
        }
        REP(i,10) d[i][i] = 0;
        REP(k,10)REP(i,10)REP(j,10){
            d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
        }
        ll dmin=IINF, id;
        REP(i,10){
            ll sum = 0;
            REP(j,10){
                if(d[i][j]!=IINF)
                    sum += d[i][j];
            }
            if(sum != 0 && sum < dmin){
                id = i;
                dmin = sum;
            }
        }
        cout << id << " " << dmin << endl;
    }
    return 0;
}
