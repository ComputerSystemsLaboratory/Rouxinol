#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <utility>
#include <functional>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cassert>

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

const ll MOD = ll(1e9) + 7;
const ll INF = LLONG_MAX;
const ll MAX_N = ll(1e5) + 5;
const double EPS = 10e-8;
const double PI = 3.14159265359;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define REPR(i, n) for (ll i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)

int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

struct UF{
    static const int MAX_N = 100000;
    int p[MAX_N];
    int r[MAX_N];

    void init(int n){
        REP(i,n){
            p[i]=i;
            r[i]=0;
        }
    }
    int find(int x){
        if(p[x]==x)return x;
        return p[x] = find(p[x]);
    }
    void unite(int x, int y){
        x = find(x);
        y = find(y);
        if(x == y)return;
        if(r[x] < r[y])swap(x,y);
        if(r[x]==r[y])r[x]++;
        p[y]=x;
    }
    bool same(int x, int y){
        return find(x)==find(y);
    }
};

int n;
vector<pair<int,P>> es;

int MST(){
    int res = 0;
    sort(es.begin(), es.end());
    UF g;
    g.init(n);
    REP(i,es.size()){
        int cost = es[i].first, u = es[i].second.first, v = es[i].second.second;
        if(g.same(u,v))continue;
        g.unite(u,v);
        res += cost;
    }
    return res;
}

int main() {
    cin >> n;
    REP(i,n){
        REP(j,n){
            int a;
            cin >> a;
            if(a==-1)continue;
            es.push_back({a,{i,j}});
        }
    }
    cout << MST() << endl;
    return 0;
}
