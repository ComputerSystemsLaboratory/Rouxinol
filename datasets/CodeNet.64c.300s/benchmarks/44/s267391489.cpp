#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <bitset>
#include <iostream>
using namespace std;




int main()
{   
    // freopen("in","r",stdin);
    int n;
    while(scanf("%d",&n)&&n){
        int dist[10][10];
        int a,b,c,V = 0;
        memset(dist,0x3f,sizeof(dist));
        for(int i=0;i<n;i++){
            scanf("%d%d%d",&a,&b,&c);
            dist[a][b]=dist[b][a]=c;
            V = max(V,max(a+1,b+1));
        }
        for(int i=0;i<V;i++)
            dist[i][i] = 0;

        for(int k=0;k<V;k++){
            for(int i=0;i<V;i++){
                for(int j=0;j<V;j++){
                    if(dist[i][k]+dist[k][j]<dist[i][j]){
                        // printf("%d = %d + %d\n",dist[i][j],dist[i][k],dist[k][j]);
                        dist[i][j] = dist[i][k]+dist[k][j];
                    }
                }
            }
        }
        int ans = 1e8,id;
        for(int i=0;i<V;i++){
            int res = 0;
            for(int j=0;j<V;j++){
                res += dist[i][j];
            }
            if(res < ans){
                ans = res;
                id = i;
            }
        }
        printf("%d %d\n",id,ans);
    }
    return 0;
}