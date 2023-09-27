#include<vector>

class UnionFind{
public:
    UnionFind(int N):parent(N), rank(N,0), size(N,1){
        for(int i=0;i<N;++i) parent[i]=i;
    }
    int find(int x){
        return x==parent[x]?x:parent[x]=find(parent[x]);
    }
    bool same(int x,int y){
        return find(x)==find(y);
    }
    void unite(int x,int y){
        x=find(x), y=find(y);
        if(x==y) return;
        if(rank[x]==rank[y]) parent[y]=x, rank[x]++;
        else{
            if(rank[x]<rank[y]) std::swap(x,y);
            parent[y]=x;
        }
        size[x]+=size[y];
        size[y]=0;
    }
    int getParentSize(int x){
        return size[find(x)];
    }
    int getSize(int x){
        return size[x];
    }
private:
    std::vector<int> parent, rank, size;
};

#include<iostream>
using namespace std;
int main(){
    int N,Q;
    cin>>N>>Q;
    UnionFind UF(N);
    for(int i=0;i<Q;++i){
        int c,x,y;
        cin>>c>>x>>y;
        if(c) cout<<UF.same(x,y)<<endl;
        else UF.unite(x,y);
    }
}