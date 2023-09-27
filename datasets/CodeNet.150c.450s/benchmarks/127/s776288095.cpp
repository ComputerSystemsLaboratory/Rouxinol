#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <climits>
#include <ctime>
#include <cassert>
using namespace std;

#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)
#define repq(i,a,n) for(int (i)=(a); (i)<=(n); (i)++)
#define repr(i,a,n) for(int (i)=(a); (i)>=(n); (i)--)
#define all(v) begin(v), end(v)
#define pb(a) push_back(a)
#define fr first
#define sc second
#define INF 2000000000
#define int long long int

#define X real()
#define Y imag()
#define EPS (1e-10)
#define EQ(a,b) (abs((a) - (b)) < EPS)
#define EQV(a,b) ( EQ((a).X, (b).X) && EQ((a).Y, (b).Y) )
#define LE(n, m) ((n) < (m) + EPS)
#define LEQ(n, m) ((n) <= (m) + EPS)
#define GE(n, m) ((n) + EPS > (m))
#define GEQ(n, m) ((n) + EPS >= (m))

typedef vector<int> VI;
typedef vector<VI> MAT;
typedef pair<int, int> pii;
typedef long long ll;

typedef complex<double> P;
typedef pair<P, P> L;
typedef pair<P, double> C;

int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};
int const MOD = 1000000007;

namespace std {
    bool operator<(const P& a, const P& b) {
        return a.X != b.X ? a.X < b.X : a.Y < b.Y;
    }
}

signed main() {
    int m; cin >> m;
    rep(i,0,m) {
        string s; cin >> s;
        int len = s.length();
        set<string> res;
        rep(j,1,len) {
            int len_l = j, len_r = len - j;
            string s1 = s.substr(0, len_l);
            string s2 = s.substr(len_l, len_r);
            string s3 = s1;
            string s4 = s2;
            reverse(s3.begin(), s3.end());
            reverse(s4.begin(), s4.end());
            res.insert(s1 + s2);
            res.insert(s2 + s1);

            res.insert(s1 + s4);
            res.insert(s4 + s1);

            res.insert(s3 + s2);
            res.insert(s2 + s3);

            res.insert(s3 + s4);
            res.insert(s4 + s3);
        }
        cout << res.size() << endl;
    }
    return 0;
}