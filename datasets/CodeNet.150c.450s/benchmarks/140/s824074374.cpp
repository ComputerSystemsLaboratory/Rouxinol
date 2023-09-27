#include<bits/stdc++.h>
using namespace std;

struct UF{
    int N,par[10000],sz[10000];

    void init(int _N){
        N=_N;
        for(int i=0;i<N;i++){
            par[i]=i;
            sz[i]=1;
        }
    }

    int find(int x){
        return x==par[x]?x:par[x]=find(par[x]);
    }

    void unite(int x,int y){
        x=find(x);y=find(y);
        if(x==y)return;
        if(sz[x]<sz[y])swap(x,y);
        par[y]=x;
        sz[x]+=sz[y];
    }

    bool isSame(int x,int y){
        return find(x)==find(y);
    }
};

typedef pair<int,int>P;
typedef pair<int,P>PP;
int main(){
    int N,M;
    cin>>N>>M;

    vector<PP>es;

    for(int i=0;i<M;i++){
        int s,t,w;
        cin>>s>>t>>w;
        es.push_back(PP(w,P(s,t)));
    }

    sort(es.begin(),es.end());

    UF uf;
    uf.init(N);
    int ans=0;
    for(int i=0;i<M;i++){
        PP p=es[i];
        if(uf.isSame(p.second.first,p.second.second))continue;
        ans+=p.first;
        uf.unite(p.second.first,p.second.second);
    }

    cout<<ans<<endl;
    return 0;
}