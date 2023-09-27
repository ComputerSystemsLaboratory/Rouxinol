

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
typedef long long ll;
int mod(ll a){
    int c=a%1000000007;
    if(c>=0)return c;
    else return c+1000000007;
}
typedef pair<int,int> i_i;

#define inf 1<<21
/*
int map[5][5];
int p[5];
int d[5];
bool color[5];

*/
int main(){
    int n;cin>>n;
    int map[n][n];int p[n];int d[n];bool color[n];
    for(int i=0;i<=n-1;i++)for(int j=0;j<=n-1;j++){
        int k;cin>>k;
        map[i][j]=k==-1?inf:k;
    }
    for(int i=0;i<=n-1;i++)p[i]=-1;
    for(int i=0;i<=n-1;i++)d[i]=inf;
    for(int i=0;i<=n-1;i++)color[i]=false;
    
    /*color[0]=true;*/
    d[0]=0;
    
    while(1){
        int mincost=inf;
        int u=-1;
        for(int i=0;i<=n-1;i++){
            if(color[i]==false&&mincost>d[i]){
                mincost=d[i];
                u=i;
            }
        }
        if(u==-1)break;
        
        color[u]=true;
        for(int i=0;i<=n-1;i++){
            if(color[i]==false&&d[i]>map[u][i]){
                d[i]=map[u][i];
                p[i]=u;
            }
        }
        
    }
    ll sum=0;
    for(int i=1;i<=n-1;i++){
        sum+=map[i][p[i]];
    }
    cout<<sum<<endl;
    return 0;
}














