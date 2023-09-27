#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> Pii;
typedef tuple<int, int, int> TUPLE;
typedef vector<int> V;
typedef vector<V> VV;
typedef vector<VV> VVV;
const int inf = 1e9;
const int mod = 1e9 + 7;

struct Dice {
    V v;
    Dice() {}
    Dice(V _v) : v(_v) {}
    void rot(char c) {
        int t = v[0];
        switch(c) {
            case 'N':
                v[0] = v[1];
                v[1] = v[5];
                v[5] = v[4];
                v[4] = t;
                break;
            case 'S':
                v[0] = v[4];
                v[4] = v[5];
                v[5] = v[1];
                v[1] = t;
                break;
            case 'W':
                v[0] = v[2];
                v[2] = v[5];
                v[5] = v[3];
                v[3] = t;
                break;
            case 'E':
                v[0] = v[3];
                v[3] = v[5];
                v[5] = v[2];
                v[2] = t;
                break;
        }
    }
};

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    V v(6);
    rep(i, 6) cin >> v[i];
    Dice d(v);

    string s;
    cin >> s;
    for (const auto& c : s) {
        d.rot(c);
    }

    cout << d.v[0] << endl;
}