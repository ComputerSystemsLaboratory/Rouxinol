#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <map>
#include <bitset>
#include <cstdio>
#include <set>
#include <stack>
#include <queue>
#include <cassert>
#include <numeric>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for (ll i=(a),__last_##i=(b);i<__last_##i;i++)
#define RFOR(i,a,b) for (ll i=(b)-1,__last_##i=(a);i>=__last_##i;i--)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define __GET_MACRO3(_1, _2, _3, NAME, ...) NAME
#define rep(...) __GET_MACRO3(__VA_ARGS__, FOR, REP)(__VA_ARGS__)
#define rrep(...) __GET_MACRO3(__VA_ARGS__, RFOR, RREP)(__VA_ARGS__)
template<typename T> istream &operator>>(istream &is, vector<T> &v){ for (auto &x : v) is >> x; return is; }
template<typename T> ostream& operator<<(ostream& os, const vector<T>& v) {
    REP(i,v.size()){if(i)os<<" ";os<<v[i];}return os;}
template<typename T> ostream& operator<<(ostream& os, const vector<vector<T>>& v) {
    REP(i,v.size()){if(i)os<<endl;os<<v[i];}return os;}
#define vi vector<int>
#define vii vector<vector<int>>
#define mii map<int,int>
#define Sort(v) sort(v.begin(),v.end())
#define Reverse(v) reverse(v.begin(),v.end())
#define ALL(a)  (a).begin(),(a).end()
#define pb push_back
#define mp make_pair
//#define int ll

const int md = 1000000007;
const int INF = 1<<30;

class UnionFind{
private:
    vi par,rank;
public:
    explicit UnionFind(int n){
        par.resize(n);
        rank.resize(n);
        rep(i,n) par[i] = i;
    }

    int root(int x){
        return x == par[x] ? x : par[x] = root(par[x]);
    }

    void unite(int x, int y){
        x = root(x);
        y = root(y);

        if(x == y) return;
        if(rank[x] > rank[y]) swap(x,y);

        par[x] = y;
        if(rank[x] == rank[y]) rank[x]++;
    }

    bool same(int x, int y){
        return root(x) == root(y);
    }
};

int main(){
    int n; cin >> n;
    UnionFind u(n);

    int q; cin >> q;

    rep(i,q){
        int c; cin >> c;
        int x,y; cin >> x >> y;
        if(c == 0){
            u.unite(x,y);
        }else{
            cout << u.same(x,y) << endl;
        }
    }
}

