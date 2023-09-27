#include <iostream>
#include <algorithm>
#include <utility>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <math.h>
#include <string.h>
#include <iomanip>
#include <numeric>
#include <cstdlib>
#include <cstdint>
#include <cmath>
#include <functional>

using namespace std;

using ll = long long;
using pll = pair<ll, ll>;
using vl = vector<ll>;
using vll = vector<vl>;
using vpll = vector<pll>;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; i--)
#define Rep(i, n) for (long long i = 0; i< (long long)(n); i++)
#define RRep(i,n) for (long long i = ((long long)(n)-1); i>=0; i--)
#define all(v) (v).begin(),(v).end()

struct Edge{
    int to;
    int weight;
    Edge(int t, int w) : to(t), weight(w){ }
};

struct edge{
    int from;
    int to;
    int weight;
    edge(int f,int t,int w) : from(f), to(t), weight(w){ }
};

using Graph = vector<vector<Edge>>;
using graph = vector<vector<int>>;
using edges = vector<edge>;

template <class T>
inline bool chmin(T &a, T b){
    if (a > b){
        a = b;
        return true;
    }
    return false;
}

template <class T>
inline bool chmax(T &a, T b){
    if (a < b){
        a = b;
        return true;
    }
    return false;
}

template <class T>
T gcd(T a, T b){
    if( b==0 ) return a;
    return gcd(b, a%b);
}

template <class T>
T lcm(T a, T b){
    return (a*b)/gcd(a,b);
}

const int INF = 1e9+7;

vector<int> dx = {-1,0,1,0};
vector<int> dy = {0,-1,0,1};

struct UnionFind{
private:
    vector<int> par;

public:
    UnionFind(int n=0): par(n,-1){ }

    int find(int x){
        if(par[x]<0) return x;
        else return par[x] = find(par[x]);
    }

    bool same(int x,int y){
        return find(x)==find(y);
    }

    bool unite(int x, int y){
        x = find(x); y = find(y);
        if(x==y) return false;
        if(par[x]>par[y]) swap(x,y);
        par[x]+=par[y];
        par[y] = x;
        return true;
    }

    int size(int x){
        return -par[find(x)];
    }

    int count_group(){
        int c = 0;
        rep(i,par.size()){
            if(par[i]<0) c++; 
        }
        return c;
    }
};



int kruskal(edges es,int v){
    sort(all(es),[](const edge &a, const edge &b){
        return (a.weight<b.weight);
    });
    UnionFind uf(v);
    int ret = 0;
    for(const auto& e: es){
        if(!uf.same(e.from,e.to)){
            uf.unite(e.from,e.to);
            ret += e.weight;
        }
    }
    return ret;
}

int main(){
    int v,e;
    cin >> v >> e;
    edges es;
    rep(_,e){
        int s,t,w;
        cin >> s >> t >> w;
        es.emplace_back(edge(s,t,w));
    }
    cout << kruskal(es,v) << endl;
}
