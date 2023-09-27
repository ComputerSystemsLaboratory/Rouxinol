#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

struct UnionFind{
    vector<int> parent;
    vector<int> rank;
    UnionFind(int n):rank(n,0),parent(n){
        rep(i,n) parent[i]=i;
    }

    int find(int x){
        if (parent[x] == x) return x;
        else return find(parent[x]);
    }

    void unite(int x, int y){
        x = find(x);
        y = find(y);
        if (x==y) return;
        else if(rank[x]<rank[y]) parent[x]=y;
        else{
            parent[y]=x;
            if (rank[x]==rank[y]){
                rank[x]+=1;
            }
        }
    }
};




int main(){
    int v,e;
    cin >> v >> e;
    //tuple<int,int,int> edge();
    vector<tuple<int,int,int>> edge(e);
    UnionFind uf(v);
    
    rep(i,e){
        int s,t,w;
        cin >> s >> t >> w;
        //tuple<int,int,int> temp = make_tuple(w,s,t);
        tuple<int,int,int> temp(w,s,t);
        edge[i]=temp;
    }
    sort(edge.begin(),edge.end());
    /*
    rep(i,e){
        cout << get<0>(edge[i])<<" " <<  get<1>(edge[i]) <<" "<< get<2>(edge[i]) << endl;
    }
    */
    int res=0;
    rep(i,e){
        int s,t,w;
        w = get<0>(edge[i]);
        s = get<1>(edge[i]); t = get<2>(edge[i]);
        if(uf.find(s)==uf.find(t))continue;
        uf.unite(s,t);
        res+=w;
    }

    cout << res << endl;


}
