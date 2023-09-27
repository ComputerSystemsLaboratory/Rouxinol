#include <numeric>
#include<iostream>
#include<set>
#include<queue>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
#include <sstream>
#include<string>
#include <cmath>
#include <iomanip>
#include <string>
#include<list>
#include<string.h>
#include<memory.h>
using namespace std;
#define inf 1000000007
#define int long long
#define rep(i,j,n) for(int i=j;i<n;i++)
typedef pair<int,int>  P;
double pi = 3.141592653589793;
//ここから下
struct edge{int u,v,cost;};
bool comp(const edge&e1,const edge&e2){
    return e1.cost<e2.cost;
}
edge es[214514];
int v,e;

int par[100005];
int lank[100005];

void init(int n){
    for(int i=0; i<n; i++){
        par[i]=i;
        lank[i]=0;
    }
}
int find(int x){
    if(par[x]==x){
        return x;
    }else {
        return par[x]=find(par[x]);
    }
}
void unite(int x,int y){
    x=find(x);
    y=find(y);
    if(x==y)return;
    if(lank[x]<lank[y]){
        par[x]=y;
    }else {
        par[y]=x;
        if(lank[x]==lank[y])lank[x]++;
    }
}
bool same(int x,int y){
    return find(x)==find(y);
}
int kruskal(){
    sort(es,es+e,comp);
    init(v);
    int res=0;
    rep(i,0,e){
        edge e=es[i];
        if(!same(e.u,e.v)){
            unite(e.u,e.v);
            res+=e.cost;
        }
    }
    return res;
}

signed main(){
    cin>>v>>e;
    rep(i,0,e){
        int a,b,c;cin>>a>>b>>c;
        es[i]=edge{a,b,c};
        es[i+e]=edge{a,b,c};
    }
    e*=2;
    cout<<kruskal()<<endl;
    return 0;
}
