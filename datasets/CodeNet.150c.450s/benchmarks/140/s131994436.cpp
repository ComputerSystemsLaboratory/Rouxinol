#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

std::vector<int> parent;
std::vector<int> rnk;

void init(int n){
    parent.clear();
    rnk.clear();
    for(int i=0; i<n; i++){
        parent.push_back(i);
        rnk.push_back(0);
    }
}

int find(int x){
    if(x == parent[x]){
        return x;
    } else {
        return parent[x] = find(parent[x]);
    }
}

void unite(int x, int y){
    x = find(x);
    y = find(y);

    if(x == y) return;

    if(rnk[x] < rnk[y]){
        parent[x] = y;
    } else {
        parent[y] = x;
        if(rnk[x] == rnk[y]) rnk[x]++;
    }
}

bool same(int x, int y) {
    return find(x) == find(y);
}

struct edge{
    int from, to, cost;
};

bool comp(const edge& e1, const edge& e2){
    return e1.cost < e2.cost;
}
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int v, e;
    cin >> v >> e;

    vector<edge> es(e);
    for(int i=0; i<e; i++) {
        edge ed;
        cin >> ed.from >> ed.to >> ed.cost;
        ed.from; ed.to;
        es[i] = ed;
    }

    sort(es.begin(), es.end(), comp);
    init(v);
    int ret = 0;
    for(int i=0; i<e; i++){
        edge e = es[i];
        if(!same(e.from, e.to)){
            ret += e.cost;
            unite(e.from, e.to);
        }
    }
    cout << ret << "\n";
}