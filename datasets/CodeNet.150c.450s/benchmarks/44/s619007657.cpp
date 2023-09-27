/***** ?????¬???????????¬?????? *****/

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
    int a[4], b[4];
    while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]) {
        set<int>s1, s2;
        rep(i,0,4) s1.insert(a[i]);
        rep(i,0,4) s2.insert(b[i]);

        int hit = 0, blow = 0;
        rep(i,0,4) {
            if(a[i] == b[i]) hit++;
            else if(s1.count(b[i]) != 0) blow++;
        }

        printf("%d %d\n",hit,blow);
    }
    return 0;
}