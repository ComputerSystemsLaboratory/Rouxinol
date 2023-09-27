#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class DisjointSet{
  public:
    vector<int> rank, p;

    DisjointSet(){}
    DisjointSet(int size){
        rank.resize(size, 0);
        p.resize(size, 0);
        for(int i = 0; i < size; i++) makeSet(i);
    }

    void makeSet(int x){
        p[x] = x;
        rank[x] = 0;
    }

    bool same(int x, int y){
        return findSet(x) == findSet(y);
    }
    
    void unite(int x, int y){
        link(findSet(x), findSet(y));
    }

    void link(int x, int y){
        if(rank[x] > rank[y]){
            p[y] = x;
        }else{
            p[x] = y;
            if(rank[x] == rank[y]){
                rank[y]++;
            }
        }
    }

    int findSet(int x){
        if(x != p[x]){
            // path compression
            p[x] = findSet(p[x]);
        }
        return p[x];
    }
};

int main(){
    int v, e, s, t, w;
    cin >> v >> e;

    DisjointSet uf(v);

    priority_queue<pair<int, pair<int,int>>> pq;

    for(int i = 0; i < e; i++){
        cin >> s >> t >> w;
        pq.push({-w, {s, t}});
    }

    int ans = 0;

    while(!pq.empty()){
        auto x = pq.top();  pq.pop();
        if(!uf.same(x.second.first, x.second.second)){
            ans += -x.first;
            uf.unite(x.second.first, x.second.second);
        }
    }

    cout << ans << endl;
    
    return 0;
}
