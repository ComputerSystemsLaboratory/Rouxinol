#include <bits/stdc++.h>
using namespace std;


struct union_find2_2{
    vector<int> par;
    union_find2_2(int sz){
        par.resize(sz);
        for(int i=0;i<sz;++i) par[i]=i;
    }
    int find(int a){//根を探す
        if(par[a]==a) return a;
        else return par[a] = find(par[a]); 
    }
    void unite(int a,int b){
        int root_a = find(a),root_b = find(b); 
        par[root_a] = root_b;                   
    }
    bool same(int a,int b){
        return find(a)==find(b);
    }
};
int main(){
    int n , q ;
    cin >> n >> q;
    union_find2_2 uf(n);
    for(int i=0;i<q;i++){
        int c , x , y;
        cin >> c >> x >> y;
        if(c) cout << uf.same(x,y) << endl;
        else uf.unite(x,y);
    }
}
