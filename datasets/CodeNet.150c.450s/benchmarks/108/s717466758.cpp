#include <iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<cctype>
#include<queue>
#include<stack>
#include<stdio.h>
#include<vector>
#include<set>
#include<map>
#include<array>
#include<iomanip>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
static const int N=100;
static const int inf=(1<<29);
int M[N][N];
int d[N];
int n;

void dfs(int u){
    rep(i,n)d[i]=inf;
    
    queue<int> q;
    q.push(u);
    d[u]=0;
    int l;
    while(!q.empty()){
        l=q.front();
        q.pop();
        for(int v=0;v<n;v++){
            if(M[l][v]==0)continue;
            if(d[v]!=inf)continue;
            d[v]=d[l]+1;
            q.push(v);
        }
    }
    
    rep(i,n){
        cout<<i+1<<" "<<(d[i]==inf?-1:d[i])<<endl;
    }
    
    
}



int main(){
    int u,k,v;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            M[i][j]=0;
        }
    }
    
    
    for(int i=0;i<n;i++){
        cin>>u>>k;
        u--;
        for(int j=0;j<k;j++){
            cin>>v;
            v--;
            M[u][v]=1;
        }
    }
    dfs(0);
    
}

