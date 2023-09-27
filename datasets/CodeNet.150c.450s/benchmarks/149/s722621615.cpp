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

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

#define fst first
#define scd second
#define PB push_back
#define MP make_pair
#define rep(i,x) for(int i=0;i<(x);++i)
#define rep1(i,x) for(int i=1;i<=(x);++i)
#define rrep(i,x) for(int i=(x)-1;i>=0;--i)
#define rrep1(i,x) for(int i=(x);i>=1;--i)
#define FOR(i,a,x) for(int i=(a);i<(x);++i)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()

#define omajinai ios::sync_with_stdio(false);cin.tie(0)

template<typename T>bool chmax(T&a,T b){if(a<b){a=b;return true;}return false;}
template<typename T>bool chmin(T&a,T b){if(a>b){a=b;return true;}return false;}
template<typename T>T get(){T a;cin>>a;return a;}
template<typename T>T rev(T a){reverse(all(a));return a;}
template<typename T>istream&operator>>(istream&is,vector<T>&vec){rep(i,vec.size())is>>vec[i];return is;}
template<typename T>vector<T>&sort(vector<T>&a){sort(all(a));return a;}

const int inf = 1e9;
const ll linf = 3e18;
const double eps = 1e-9;

struct UF {
    vi data;
    void init(int n)
    {
        data.resize(n);
        fill(all(data), -1);
    }
    int root(int x)
    {
        return data[x] < 0 ? x : data[x] = root(data[x]);
    }
    void unite(int x, int y)
    {
        x = root(x);
        y = root(y);
        if (x == y) return;
        if (size(x) < size(y)) swap(x, y);
        data[x] += data[y];
        data[y] = x;
    }
    bool same(int x, int y)
    {
        return root(x) == root(y);
    }
    int size(int x)
    {
        return -data[x];
    }
    bool is_root(int x)
    {
        return x == root(x);
    }
} uf;

signed main()
{
    int N, Q; cin >> N >> Q;

    uf.init(N);

    rep(i, Q) {
        int c, x, y; cin >> c >> x >> y;
        if (c == 0) {
            uf.unite(x, y);
        } else {
            cout << uf.same(x, y) << endl;
        }

    }
}