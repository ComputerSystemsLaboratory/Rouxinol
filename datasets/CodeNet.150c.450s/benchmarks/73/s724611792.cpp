#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <utility>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <functional>

using namespace std;

#define fst first
#define scd second
#define PB push_back
#define MP make_pair
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define omajinai ios::sync_with_stdio(false);cin.tie(0)
#define rep(i,x) for(int i=0;i<(int)(x);++i)
#define rep1(i,x) for(int i=1;i<=(int)(x);++i)

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

template<typename T>T& max(T&a,T&b){if(a>=b)return a;return b;}
template<typename T>T& min(T&a,T&b){if(a<b)return a;return b;}
template<typename T>bool chmax(T&a,T b){if(a<b){a=b;return true;}return false;}
template<typename T>bool chmin(T&a,T b){if(a>b){a=b;return true;}return false;}
template<typename T>T get(){T a;cin>>a;return a;}
template<typename T>T rev(T a){reverse(all(a));return a;}
template<typename T>vector<T>&sort(vector<T>&a){sort(all(a));return a;}

const int inf = 1e9;
const ll linf = 3e18;
const double eps = 1e-9;

struct Segtree {
    int n;

    vi dat;

    void init(int n_) {
        n = 1;
        while (n < n_) n *= 2;
        dat.resize(2 * n);
        for (int i = 0; i < 2 * n - 1; ++i) dat[i] = 0;
    }

    void update(int a, int x) {
        a += n - 1;
        dat[a] += x;
        while (a > 0) {
            a = (a - 1) / 2;
            dat[a] += x;
        }
    }

    int query(int a, int b, int k = 0, int l = 0, int r = -1) {
        if (r == -1) r = n;
        if (r <= a || b <= l) return 0;
        if (a <= l && r <= b) return dat[k];

        int lsum = query(a, b, k * 2 + 1, l, (l + r) / 2);
        int rsum = query(a, b, k * 2 + 2, (l + r) / 2, r);

        return lsum + rsum;
    }
};

signed main()
{
    int N, Q; cin >> N >> Q;

    Segtree seg;
    seg.init(N);

    rep(i, Q) {
        int type, x, y;

        cin >> type >> x >> y;
        -- x;

        if (type % 2 == 0) {
            seg.update(x, y);
        } else {
            -- y;
            cout << seg.query(x, y + 1) << endl;
        }
    }
}