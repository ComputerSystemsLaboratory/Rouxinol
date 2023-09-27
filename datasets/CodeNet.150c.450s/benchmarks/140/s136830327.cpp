#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge{//辺のデータ
    int s;//一方の頂点
    int t;//他方の頂点
    int cost;//辺の重み

    //辺をコストの昇順にソートする
    bool operator<(const Edge& right) const {
        return cost < right.cost;
    }
};

class union_find{
public:
    union_find(int N){
        parent = new int[N];
        rank = new int[N];
        for(int i = 0; i < N; i++){
            parent[i] = i;
            rank[i] = 0;
        }
    }
    
    int root(int x){
        if(parent[x] == x){
            return x;
        }else{
            return parent[x] = root(parent[x]);
        }
    }
    
    void unite(int x, int y);
    bool same(int x, int y){
        return root(x) == root(y);
    }
private:
    int *parent;
    int *rank;
};


void union_find::unite(int x, int y){
    x = root(x);
    y = root(y);
    
    if(x == y) return;
    
    if(rank[x] < rank[y]){
        parent[x] = y;
    }else{
        parent[y] = x;
        if(rank[x] == rank[y]){
            rank[x]++;
        }
    }
}

int main(){
    int v, e;
    cin >> v >> e;
    vector<Edge> e_data(e);
    union_find v_data(v);
    for(int i = 0; i < e; i++){
        int s, t, cost;
        cin >> s >> t >> cost;
        e_data[i].s = s;
        e_data[i].t = t;
        e_data[i].cost = cost;
    }
    
    sort(e_data.begin(), e_data.end());

    long long int res = 0;
    for(int i = 0; i < e; i++){
        if(!v_data.same(e_data[i].s, e_data[i].t)){
            res += e_data[i].cost;
            v_data.unite(e_data[i].s, e_data[i].t);
        }
    }

    cout << res << endl;
    return 0;
}
