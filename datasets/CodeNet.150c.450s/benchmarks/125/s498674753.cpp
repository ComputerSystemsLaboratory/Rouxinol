#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
using ll = long long;
#define White 0
#define Black 1
static const int MAX=100;

int C[MAX],d[MAX],f[MAX];
vector<int> adj[MAX];
void init(){
    rep(i,MAX)C[i]=White;
}
int tt=0;
void solve(int node){
    d[node]=++tt;
    C[node]=Black;
    for(int x:adj[node]){
        if(C[x]==White)solve(x);
    }
    f[node]=++tt;
    return;
}

int main(){
    int n;cin>>n;
    init();
    rep(i,n){
        int id,k,node;
        scanf("%d %d",&id,&k);
        id--;
        rep(j,k){
            scanf("%d",&node);
            node--;
            adj[id].push_back(node);
        }
    }
    rep(i,n){
        if(C[i]==White)solve(i);
    }
    rep(i,n){
        printf("%d %d %d\n",i+1,d[i],f[i]);
    }
    return 0;
}
