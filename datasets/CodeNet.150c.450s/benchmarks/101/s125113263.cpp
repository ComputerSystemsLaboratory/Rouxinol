#include <bits/stdc++.h>
#define ll long long
#define INF 999999999
#define MOD 1000000007

using namespace std;

typedef pair<int,int>P;

const int MAX_N = 100000;

class UnionFind {
private:
    vector<int> par;
public:
    UnionFind(){}
    UnionFind(const int node_size) : par(node_size){
        iota(par.begin(), par.end(), 0);
    }
    int find(int x){
        if(par[x] == x) return x;
        else return par[x] = find(par[x]);
    }
    bool unite(int x, int y){
        int z;
        while(par[x] != par[y]){
            if(par[x] > par[y]) swap(x, y);
            z = par[x], par[x] = par[y];
            if(y == z) return false;
            x = z;
        }
        return true;
    }
    bool same(int x, int y){
        return find(x) == find(y);
    }
};

int main()
{
    int n,m,q;
    int a,b;
    cin >> n >> m;
    UnionFind uf(n);
    for(int i=0;i<m;i++){
        cin >> a >> b;
        uf.unite(a,b);
    }
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> a >> b;
        if(uf.same(a,b)){
            cout << "yes\n";
        }else{
            cout << "no\n";
        }
    }
}

