#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100000;
vector<int> G[MAX];

class DisjointSet{
public:
    vector<int> rank, parent;
    DisjointSet();
    DisjointSet(int size){
        rank.resize(size,0);
        parent.resize(size,0);
        for (int i=0; i<size; i++) {
            makeSet(i);
        }
    }

//    bool same(int u,int v){
//        if (parent[u] == parent[v]) {
//            return true;
//        }else{
//            return false;
//        }
//    }
    bool same(int u,int v){
        int x = findSet(u); int y= findSet(v);
        return x==y;
    }
    
    void unite(int u,int v){
        int x = findSet(u);int y= findSet(v);
        if(rank[x]<rank[y]){
            parent[x] = y;
        }else{
            parent[y] = x;
            if(rank[x]==rank[y]){
                rank[x]++;
            }
        }
    }
    // ????????????????????????
    int findSet(int u){
        
        if(u!=parent[u])
            parent[u] = findSet(parent[u]);
        
        return parent[u];
    }
private:
    void makeSet(int i){
        rank[i] = 0;
        parent[i] = i;
    }
};
    
int main(int argc, const char * argv[]) {
    
    int n,m;
    cin >> n >> m;
    DisjointSet ds(n);
    
    for(int i=0;i<m;i++){
        int s,t;
        cin >> s >> t;
        ds.unite(s, t);
    }
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        int s,t;
        cin >> s >> t;
        if(ds.same(s, t)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}