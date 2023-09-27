#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)

struct unionfind {
    vector<int> data;
    unionfind(int size) : data(size, -1) { }
    bool unite(int x, int y) {
        x = root(x); y = root(y);
        if (x != y) {
            if (data[y] < data[x]) swap(x, y);
            data[x] += data[y]; data[y] = x;
        }
        return x != y;
    }
    bool same(int x, int y) {
        return root(x) == root(y);
    }
    int root(int x) {
        return data[x] < 0 ? x : data[x] = root(data[x]);
    }
    int size(int x) {
        return -data[root(x)];
    }
};

struct edge {
    int from,to,cost;
};

vector<edge> kruscal(vector<edge> & es){
    sort(es.begin(), es.end(), [](edge a, edge b){
            return a.cost < b.cost;
        });
    unionfind uf(es.size());
    vector<edge> res;
    rep(i,es.size()){
        const edge &e = es[i];
        if(!uf.same(e.from, e.to)){
            uf.unite(e.from,e.to);
            res.push_back(e);
        }
    }
    return res;
}

int main(){
    vector<edge> es;
    int n; cin>>n;
    rep(i,n)rep(j,n){
        int c; cin>>c;
        if(c!=-1) es.push_back({i,j,c});
    }
    auto v = kruscal(es);
    int ans = 0;
    rep(i,v .size()){
        ans += v[i].cost;
    }
    cout << ans << endl;
}