#include<bits/stdc++.h>
using namespace std;

class UnionFind{
    int N;
    vector<int> par;
    vector<int> rank;
    public:
    UnionFind(int N):N(N),par(N),rank(N,0){iota(par.begin(),par.end(),0);}
    int find(int x);
    void unite(int x,int y);
    bool same(int x,int y){return find(x)==find(y);}
};

int UnionFind::find(int x){
    if(par[x]==x) return x;
    return par[x]=find(par[x]);
}
void UnionFind::unite(int x,int y){
    x=find(x),y=find(y);
    if(x==y) return;
    if(rank[x]>=rank[y]){
        if(rank[x]==rank[y]) rank[x]++;
        par[y]=x;
    }else{
        par[x]=y;
    }
}

int main(){
    int n,q;
    cin>>n>>q;
    UnionFind u(n);
    for(int i=0;i<q;i++){
        int com,x,y;
        cin>>com>>x>>y;
        if(com){
            cout<<u.same(x,y)<<endl;;
        }
        else{
            u.unite(x,y);
        }
    }
    return 0;
}