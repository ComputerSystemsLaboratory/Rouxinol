#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, int> P;
typedef pair<ll, pair<ll, ll> > P3;

const ll MOD = ll(1e9 + 7);
const ll LLINF = LLONG_MAX;
const int IINF = INT_MAX;
const int MAX_N = int(1e5) + 5;
const double EPS = 1e-8;
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
#define SORT(v) sort((v).begin(), (v).end())
#define SORTR(v) sort((v).rbegin(), (v).rend())
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)

int a[55][55]{};
int h,w;

void dfs(int i, int j){
    a[i][j] = 0;
    for(int di = -1;di<=1;++di){
        for(int dj = -1; dj <= 1; ++dj){
            int ni = i+di, nj = j+dj;
            if(ni<0 || ni>=h)continue;
            if(nj<0 || nj>=w)continue;
            if(a[ni][nj]==0)continue;
            dfs(ni,nj);
        }
    }
}

int main() {
    while(1){
        cin >> w >> h;
        if(h==0 && w==0)break;
        REP(i,h)REP(j,w)cin >> a[i][j];
        int ans = 0;
        REP(i,h)REP(j,w)if(a[i][j]){
            dfs(i,j);
            ans++;
        }
        cout << ans << endl;
    }
    
    return 0;
}

