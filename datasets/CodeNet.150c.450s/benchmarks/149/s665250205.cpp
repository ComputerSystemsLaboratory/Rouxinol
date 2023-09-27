//#include <bits/stdc++.h>
 
#include <iostream>
#include <algorithm>
 
#include <bitset>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <cstring>
#include <string>
#include <utility>
#include <array>
#include <complex>
#include <valarray>
 
#include <cassert>
#include <cmath>
#include <functional>
#include <iomanip>
#include <chrono>
#include <random>
#include <numeric>
 
 
using namespace std;
#define int long long
 
typedef long long ll;
typedef unsigned long long ull;
//typedef unsigned __int128 HASH;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef pair<ull, ull> pullull;
typedef pair<ll,int> plli;
typedef pair<double, int> pdbi;
typedef pair<int,pii> pipii;
typedef pair<ll,pll> plpll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<pii> vpii;
typedef vector<vector<int>> mat;
 
#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n);i>0;i--)
#define rrep2(i,a,b) for (int i=(a);i>b;i--)
#define pb push_back
#define fi first
#define se second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
 
const ll hmod1 = 999999937;
const ll hmod2 = 1000000000 + 9;
const int INF = 1<<30;
const ll INFLL = 1LL<<62;
const double EPS = 1e-12;
const ll mod = 1000000000 + 7;
const int dx4[4] = {1, 0, -1, 0};
const int dy4[4] = {0, 1, 0, -1};
const int dx8[8] = {1, 1, 1, 0, 0, -1, -1, -1};
const int dy8[8] = {0, 1, -1, 1, -1, 0, 1, -1};
const double pi = 3.141592653589793;
 
#define addm(X, Y) (X) = ((X) + ((Y) % mod) + mod) % mod
#define inside(y, x, h, w) (0 <= (y) && (y) < (h) && 0 <= (x) && (x) < (w)) ? true : false

int n, q;

struct UnionFind {
    int trees;
    vector<int> par, rank, tree_size;

    UnionFind() {}

    UnionFind(int n) : par(n), rank(n, 0), tree_size(n, 1), trees(n) {
        for (int i = 0; i < n; i++) {
            par[i] = i;
        }
	}

    int find_root(int now) {
        if (now == par[now]) return now;
        return par[now] = find_root(par[now]);
    }

    void unite(int u, int v) {
        int x = find_root(u);
        int y = find_root(v);
        if (x == y) return ;
        if (rank[x] < rank[y]) swap(x, y);
        par[y] = x;
        tree_size[x] += tree_size[y];
        trees--;
        if (rank[x] == rank[y]) rank[x]++;
    }

    bool same(int u, int v) {
        return find_root(u) == find_root(v);
    }

    int tree_num() {
        return trees;
    }

    int tree_w(int x) {
        return tree_size[find_root(x)];
    }
};

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> q;
    UnionFind uf(n);
    rep(i, q) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0) {
            uf.unite(x, y);
        }
        else {
            cout << uf.same(x, y) << endl;
        }
    }
}