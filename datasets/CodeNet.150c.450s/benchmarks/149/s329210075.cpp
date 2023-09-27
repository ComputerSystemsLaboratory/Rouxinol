#include "bits/stdc++.h"
using namespace std;
typedef pair<int,int> pii;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define all(a)  (a).begin(),(a).end()

template<class T>
class UF{
private:
    vector<T> par,rank;
    //    vector<int> size;
    int _size;
    int groups;
public:
    
    UF(int __size):_size(__size) , par(__size) , rank(__size,0) ,groups(1){
        for(int i=0;i<__size;i++)par[i]=i;
    }
    
    int size(){
        return _size;
    }
    
    T find(int x){
        if(par[x]==x) {
            return x;
        }else{
            return par[x]=find(par[x]);
        }
    }
    
    void unite(int x,int y){
        x=find(x);
        y=find(y);
        if(x==y) return;
        
        if(rank[x]<rank[y]){
            par[x]=y;
        }else{
            par[y]=x;
            if(rank[x]==rank[y])rank[x]++;
        }
    }
};


int main(){
    int n,q;
    cin>>n>>q;
    UF<int> uf(n);
    rep(i,q){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==0)uf.unite(b,c);
        else    cout<<(uf.find(b)==uf.find(c))<<endl;
    }
}