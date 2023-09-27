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
static const int white=0;
static const int gray=1;
static const int black=2;
int color[N],nt[N];
int mp[N][N];
int n,d[N],f[N],tt;
int next(int r){
    
    for(int i=nt[r];i<n;i++){
        nt[r]=i+1;
        if(mp[r][i])return i;
        
    }
    return -1;
    
}

void dfs_visit(int r){
    rep(i,n){nt[i]=0;}
    stack<int> s;
    s.push(r);
    d[r]=++tt;
    color[r]=gray;
    
    while(!s.empty()){
        int u=s.top();
        int v=next(u);
        if(v!=-1){
            if(color[v]==white){
            d[v]=++tt;
            color[v]=gray;
            s.push(v);
            }
        }else{
            f[u]=++tt;
            color[u]=black;
            s.pop();
        }
    }
}



void dfs(){
    tt=0;
    rep(i,n){
        color[i]=white;nt[i]=0;
    }
    rep(i,n){
        if(color[i]==white){
            dfs_visit(i);
            
        }
    }
    rep(i,n){
        cout<<i+1<<" "<<d[i]<<" "<<f[i]<<endl;
    }
}


int main(){
    cin>>n;
    rep(i,N){
        rep(j,N){
            mp[i][j]=0;
        }
    }
    rep(i,n){
        int a,b;
        cin>>a>>b;
        a--;
        rep(i,b){
            int c;
            cin>>c;
            c--;
            mp[a][c]=1;
        }
    }
    dfs();
    return 0;
}

