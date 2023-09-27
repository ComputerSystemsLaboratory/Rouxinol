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

string dig = "ixcm";
int dec(string s) {
    int ret = 0;
    reverse(s.begin(), s.end());
    int d = 1;
    bool on = false;
    rep(i,0,s.length()) {
        if(dig.find(s[i]) != string::npos) {
            if(on) ret += d;
            on = true;
        }
        else {
            ret += (s[i] - '0') * d;
            on = false;
        }

        if(s[i] == 'i') d = 1;
        else if(s[i] == 'x') d = 10;
        else if(s[i] == 'c') d = 100;
        else if(s[i] == 'm') d = 1000;
    }
    if(on) ret += d;
    return ret;
}

string enc(int n) {
    string ret = "";
    int d = 0;
    while(n != 0) {
        char c = (char)(n % 10 + (int)'0');
        if(c != '0' && c != '1') {
            ret += dig[d];
            ret += c;
        }
        else if(c == '1') {
            ret += dig[d];
        }
        n /= 10;
        d++;
    }
    reverse(ret.begin(), ret.end());
    return ret;
}

signed main() {
    int n; cin >> n;
    rep(i,0,n) {
        string s1, s2; cin >> s1 >> s2;
        int a = dec(s1), b = dec(s2);
        // printf("a: %lld, b: %lld\n", a, b);
        cout << enc(a + b) << endl;
    }
    return 0;
}