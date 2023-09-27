#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;

int main(){
    int n;cin>>n;
    int adj[n][n];
    rep(i,n)rep(j,n)adj[i][j]=0;
    rep(i,n){
        int node,k,id;
        scanf("%d %d",&node,&k);
        node--;
        rep(j,k){
            scanf("%d",&id);
            id--;
            adj[node][id]=1;
        }
    }
    rep(i,n){
        rep(j,n){
            if(j!=0)printf(" ");
            printf("%d",adj[i][j]);
        }
        printf("\n");
    }
}
