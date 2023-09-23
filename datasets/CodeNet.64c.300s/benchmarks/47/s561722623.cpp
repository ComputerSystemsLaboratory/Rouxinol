#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,n) for(int i=a; i<n; i++)
#define repr(i,a,n) for(int i=a; i>=n; i--)
#define pb(a) push_back(a)
#define fr first
#define sc second
#define INF 999999999

#define X real()
#define Y imag()
#define EPS (1e-10)
#define EQ(a,b) (abs((a) - (b)) < EPS)
#define EQV(a,b) ( EQ((a).X, (b).X) && EQ((a).Y, (b).Y) )
#define LE(n, m) ((n) < (m) + EPS)
#define GE(n, m) ((n) + EPS > (m))

typedef vector<int> VI;
typedef vector<VI> MAT;
typedef pair<int, int> pii;
typedef long long int ll;

typedef complex<double> P;
typedef pair<P, P> L;
typedef pair<P, double> C;

int const MOD = 1000000007;

int main() {
    int a[110];
    memset(a, 0, sizeof(a));
    int n;
    int m_num = 0;
    while(cin >> n) {
        // if(n == 0) break;
        a[n]++;
        m_num = max(m_num, a[n]);
    }

    rep(i,1,101) {
        if(a[i] == m_num) cout << i << endl;
    }

    return 0;
}