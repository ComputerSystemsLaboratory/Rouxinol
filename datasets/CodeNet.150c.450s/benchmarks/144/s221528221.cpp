#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<(b);i++)
#define erep(i,a,b) for(int i=a;i<=(int)(b);i++)
#define per(i,a,b) for(int i=(b)-1;i>(a);i--)
#define eper(i,a,b) for(int i=((int)(a));i>=b;i--)
#define pb push_back
#define mp make_pair
#define INF (1<<30)-1
#define MOD 1000000007
using namespace std;
typedef long long ll;
int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};
int gcd(int a,int b){return b?gcd(b,a%b):a;}

int n, m, l, m_a[110][110], m_b[110][110];
int main() {
 ios::sync_with_stdio ( false );
 cin.tie ( 0 );
    cin >> n >> m >> l;
    rep(i, 0, n) rep(j, 0, m) cin >> m_a[i][j];
    rep(i, 0, m) rep(j, 0, l) cin >> m_b[i][j];
    rep(i, 0, n) {
        rep(j, 0, l) {
            ll sum = 0;
            rep(k, 0, m) {
                sum += m_a[i][k] * m_b[k][j];
            }
            printf("%lld", sum);
            if (j != l-1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
