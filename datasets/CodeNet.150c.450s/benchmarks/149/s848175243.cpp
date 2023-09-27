#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

template<typename T>
struct UnionFind{
    vector<T>data;
    UnionFind(T n):data(n,-1){}
    void unite(T x,T y){
        x=root(x);y=root(y);
        if(x!=y){
            if(data[y]<data[x])swap(x,y);
            data[x]+=data[y];data[y]=x;
        }
    }
    T root(T x){
        return data[x]<0?x:data[x]=root(data[x]);
    }
    bool same(T x,T y){
        return root(x)==root(y);
    }
    T size(T x){
        return -data[root(x)];
    }
};

int main(){
    int n,q;
    cin>>n>>q;
    UnionFind<int>uf(n);
    for(int i=0;i<q;++i){
        int com,x,y;
        cin>>com>>x>>y;
        if(com)uf.same(x,y)?cout<<"1"<<endl:cout<<"0"<<endl;
        else uf.unite(x,y);
    }
    return 0;
}