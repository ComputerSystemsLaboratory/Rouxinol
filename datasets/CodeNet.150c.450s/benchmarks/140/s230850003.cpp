#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

struct UnionFind {
    vector<int> par;

    UnionFind(int N) : par(N){
        rep(i,N)par[i]=i;
    }

    int root(int x){
        if(par[x]==x)return x;
        return par[x]=root(par[x]);
    }

    void unite(int x, int y){
        if(root(x)==root(y))return;
        par[root(x)]=root(y);
    }

    bool same(int x, int y){
        return root(x)==root(y);
    }
};

int main(){
    int N,M; cin>>N>>M;
    priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> E;
    rep(i,M){
        int a,b,c;
        cin>>a>>b>>c;
        tuple<int,int,int> q=tuple<int,int,int>(c,a,b);
        E.push(q);
    }
    UnionFind tree(N);
    int ans=0;

    while(!E.empty()){
        tuple<int,int,int> v = E.top();
        E.pop();
        if(!tree.same(get<1>(v),get<2>(v))){
            ans+=get<0>(v);
            tree.unite(get<1>(v),get<2>(v));
        }
    }
    cout<<ans<<endl;
    return 0;
}

