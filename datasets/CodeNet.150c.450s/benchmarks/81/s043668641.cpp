#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <bitset>
#include <map>
#include <climits>
#include <set>
#include <iostream>
#include <sstream>
using namespace std;
#define INF INT_MAX>>1


int main()
{   
    // freopen("in","r",stdin);
    int n;
    while(scanf("%d",&n)&&n){
        int u,v,w,max_v=0;
        int g[15][15];
        memset(g,0x3f3f,sizeof(g));
        for(int i=0;i<n;i++){
            scanf("%d %d %d",&u,&v,&w);
            g[u][v]=g[v][u]=w;
            max_v = max(max_v,u);
            max_v = max(max_v,v);
        }  

        for(int k=0;k<=max_v;k++){
            for(int i=0;i<=max_v;i++){
                for(int j=0;j<=max_v;j++){
                    if(g[i][k]+g[k][j]<g[i][j])
                        g[i][j] = g[i][k]+g[k][j];
                }
            }
        }
        int ans_sum = INF,ans_i;
        for(int i=0;i<=max_v;i++){
            int sum = 0;
            for(int j=0;j<=max_v;j++){
                if(i!=j){
                    sum += g[i][j];
                }
            }
            if(sum < ans_sum){
                ans_sum = sum;
                ans_i = i;
            }
        }
        printf("%d %d\n",ans_i,ans_sum);
    }
    return 0;
}