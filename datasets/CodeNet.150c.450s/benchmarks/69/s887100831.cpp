#include <iostream>
#include <cstdio>
#include <string>
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
#include <ctime>
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
    int n; cin >> n;
    int x;
    rep(k,0,n) {
        int a = 0, b = 0;
        bool can = true;
        rep(i,0,10) {
            cin >> x;
            if(a < x && b < x){
                if(x - a > x - b) b = x;
                else a = x;
            }
            else if(a < x) a = x;
            else if(b < x) b = x;
            else {can = false;}
        }
        if(can) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}