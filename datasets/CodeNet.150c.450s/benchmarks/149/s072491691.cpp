#include<bits/stdc++.h>
using namespace std;

class UnionFind{
    int N;
    vector<int> par,rank,_size;
    public:
    UnionFind(int n):N(n){
        par.resize(n);
        for(int i=0;i<n;i++) par[i]=i;
        rank.assign(n,0);
        _size.assign(n,1);
    }

    int find(int x){
        if(par[x]==x) return x;
        return par[x]=find(par[x]);
    }

    void unite(int x,int y){
        x=find(x),y=find(y);
        if(x==y) return;
        if(rank[x]<rank[y]){
            par[x]=y;
            _size[y]+=_size[x];
        }
        else{
            if(rank[x]==rank[y]) rank[x]++;
            par[y]=x;
            _size[x]+=_size[y];
        }
    }

    bool same(int x,int y){return find(x)==find(y);}
    int size(int x){return _size[x];}
    
    void debug(){
        vector<queue<int>> s(N);
        for(int i=0;i<N;i++){
            int index=find(i);
            s[index].push(i);       
        }
        for(int i=0;i<N;i++){
            if(s[i].size()==0) continue;
            while(!s[i].empty()){
                cout<<s[i].front();
                s[i].pop();
                if(s[i].empty()) cout<<endl;
                else cout<<" ";
            }
        }
    }

};

int main(){
    int n,q;
    cin>>n>>q;
    UnionFind u(n);
    for(int i=0;i<q;i++){
        int c,x,y;
        cin>>c>>x>>y;
        if(c==0) u.unite(x,y);
        else cout<<u.same(x,y)<<endl;
    }
    return 0;
}