#include<algorithm>
#include <iostream>
#include<cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const ll INF=10000000000000000;
int n,m;
ll g[105][105];
int main(){
   cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    g[i][j]=0;
                }else{
                    g[i][j]=INF;
                }
            }
        }
        ll s,t,w;
        for(int i=0;i<m;i++){
            cin>>s>>t>>w;
            g[s][t]=min(g[s][t],w);
        }
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(g[i][k]!=INF&&g[k][j]!=INF)
                    g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
                }
            }
        }
    int flag=0;
    for(int i=0;i<n;i++){
        if(g[i][i]<0){
            flag=1;
        }
    }
    if(flag){
        printf("NEGATIVE CYCLE\n");
    }else{
        for(int i=0;i< n;i++){
            for(int j=0;j<n;j++){
                if(j==0){
                     if(g[i][j]==INF){
                        printf("INF");
                    }else{
                        printf("%lld",g[i][j]);
                    }
                }else{
                    if(g[i][j]==INF){
                        printf(" INF");
                    }else{
                        printf(" %lld",g[i][j]);
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}

