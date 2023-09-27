#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

struct UnionFind{
    int data[100001]; 
    void init(int n){memset(data,-1,sizeof(data));}
    int find(int x){return data[x]<0?x:data[x]=find(data[x]);}
    void unite(int x, int y){
        x=find(x);y=find(y);       
        if(x!=y){
            if(data[y]<data[x]) swap(x,y);
            data[x]+=data[y];data[y]=x;
        }
        return;
    } 
    bool same(int x, int y){return (find(x) == find(y));}
    int size(int x){return -data[x];}
};
int main(){
    int n,m,q;
    cin>>n>>m;
    UnionFind uf;
    uf.init(n+1);
    int s,t;
    rep(i,m){
        cin>>s>>t;
        uf.unite(s,t);
    }
    cin>>q;
    rep(i,q){
        cin>>s>>t;
        if(uf.same(s,t)) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
