#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> par;
    UnionFind(int N):par(N) {
        for (int i=0; i<N; i++) par[i]=i;
    }
    int root (int x) {
        if (par[x]==x) return x;
        return par[x]=root(par[x]);
    }
    void unite(int x,int y) {
        int rx=root(x);
        int ry=root(y);
        if (rx==ry) return;
        par[rx]=ry;
    }
    bool same (int x,int y) {
        int rx=root(x);
        int ry=root(y);
        return rx==ry;
    }
};

int main() {
   int V,E;
   cin >> V >> E;
   priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> G;
   for (int i=0; i<E; i++) {
       int s,t,w;
       cin >> s >> t >> w;
       G.push(make_tuple(w,s,t));
   }
   UnionFind tree(V);
   int count=0;
   for (int i=0; i<E; i++) {
       tuple<int,int,int> a=G.top();
       G.pop();
       if (tree.same(get<1>(a),get<2>(a))) continue;
       tree.unite(get<1>(a),get<2>(a));
       count+=get<0>(a);
   }
   cout << count << endl;
}
