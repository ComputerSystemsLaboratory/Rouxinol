#include <bits/stdc++.h>
using namespace std;

typedef ostringstream OSS;
typedef istringstream ISS;

typedef long long LL;
typedef pair<int, int> PII;

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;
typedef vector<double> VD;
typedef vector<VD> VVD;
typedef vector<string> VS;
typedef vector<VS> VVS;
typedef vector<bool> VB;
typedef vector<VB> VVB;
typedef vector<PII> VPII;

#define fst first
#define snd second
// #define Y first
// #define X second
#define MP make_pair
#define PB push_back
#define EB emplace_back 
#define ALL(x) (x).begin(),(x).end()
#define RANGE(x,y,maxX,maxY) (0 <= (x) && 0 <= (y) && (x) < (maxX) && (y) < (maxY))
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl

template < typename T > inline T fromString(const string &s) { T res; ISS iss(s); iss >> res; return res; };
template < typename T > inline string toString(const T &a) { OSS oss; oss << a; return oss.str(); };

const int INF = 0x3f3f3f3f;
const LL INFL = 0x3f3f3f3f3f3f3f3fLL;
const double DINF = 0x3f3f3f3f;
const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

int H, W;

PII solve() {
    PII res;
    PII min_dh(INF, INF);

    PII this_dh(H * H + W * W, H);

    // x > y
    for (int y = 1; y <= 150; y++) {
        for (int x = y + 1; x <= 150; x++) {
            PII dh(x * x + y * y, y);
            if (this_dh < dh && dh < min_dh) {
                min_dh = dh;
                res = MP(y, x);
            }
        }
    }

    return res;
}

int main(void) {
    while (cin >> H >> W, H) {
        PII ans = solve();
        cout << ans.fst << " " << ans.snd << endl;
    }

	return 0;
}