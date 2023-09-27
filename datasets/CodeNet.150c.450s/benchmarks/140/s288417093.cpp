#include<bits/stdc++.h>
//#define int long long
#define loop(i, a, b) for(int i = a; i < b; i++)
#define rep(i, a) loop(i, 0, a)
#define all(a) (a).begin(),(a).end()
using namespace std;
const int MOD = 1e9 + 7, INF = 1e9;
using vi = vector <int>;
using vvi = vector <vi>;
//g++ -std==c++14

struct edge{int u, v, cost;};

bool comp(const edge& e1, const edge& e2){return e1.cost < e2.cost;}

int tree[100010];
int root(int x){return tree[x] == x ? x : tree[x] = root(tree[x]);}
void unite(int a , int b){tree[root(a)] = root(b);}

edge es[100010];
int V, E;

int kruskal(){
    sort(es, es + E, comp);
    rep(i, V)tree[i] = i;
    int res = 0;
    rep(i, E){
        edge e = es[i];
        if(root(e.u) != root(e.v)){
            unite(e.u, e.v);
            res += e.cost;
        }
    }
    return res;
}

signed main(){
    cin >> V >> E;
    rep(i, E)cin >> es[i].u >> es[i].v >> es[i].cost;
    cout << kruskal() << endl;
}