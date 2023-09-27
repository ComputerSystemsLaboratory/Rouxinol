#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pint;


#define MAX_N 10000
struct UnionFind{
    int par[MAX_N]; 
    void init(int n){
        for (int i=0;i<n;i++) par[i] = i;
    } 
    int find(int x){
        if (x==par[x]) return (x);
        return (par[x]=find(par[x]));
    }
    void unite(int x, int y){
        x=find(x);y=find(y);       
        if(x==y) return;
        par[x] = y;
    } 
    bool same(int x, int y){
        return (find(x) == find(y));
    } 
};

int main(){
    int n,q,c,x,y;
    UnionFind uf;
    cin>>n>>q;
    uf.init(n);
    rep(i,q){
        cin>>c>>x>>y;
        if(c==0) uf.unite(x,y);
        else{
            if(uf.same(x,y)) cout<<1<<endl;
            else cout<<0<<endl;
        }
    }
    return 0;
}