#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<(b);++i)
#define erep(i,a,b) for(int i=a;i<=(int)(b);++i)
#define per(i,a,b) for(int i=(b);i>(a);--i)
#define eper(i,a,b) for(int i=((int)(a));i>=b;--i)
#define pb push_back
#define mp make_pair
#define INF 2000000000
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int lcm(int a,int b){return a/gcd(a, b)*b;}

int V, E, d[110][110];
int main() {
 ios::sync_with_stdio ( false );
 cin.tie ( 0 );
    cin >> V >> E;
    rep(i, 0, V) rep(j, 0, V) {
        d[i][j] = INF;
        d[i][i] = 0;
    }
    rep(i, 0, E) {
        int s, t, u;
        cin >> s >> t >> u;
        d[s][t] = u;
    }
    rep(k, 0, V) rep(i, 0, V) rep(j, 0, V) {
        if (d[i][k] != INF && d[k][j] != INF) {
            d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
        }
    }
    rep(i, 0, V) {
        if (d[i][i] < 0) {
            printf("NEGATIVE CYCLE\n");
            return 0;
        }
    }
    rep(i, 0, V) {
        rep(j, 0, V) {
            if (d[i][j] != INF) printf("%d", d[i][j]);
            else printf("INF");
            if (j != V-1) printf(" ");
            else printf("\n");
        }
    }
    return 0;
}
