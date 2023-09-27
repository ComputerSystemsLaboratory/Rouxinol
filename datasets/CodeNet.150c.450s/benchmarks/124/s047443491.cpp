#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int inf=0x3f3f3f3f;
int map1[109][109];
int flag[109];
int result[109];
int main(){
    int n;
    int u,v,w,k;
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(i==j)
                    map1[i][j]=0;
                else
                    map1[i][j]=inf;
        for(int i=0;i<n;i++){
            scanf("%d%d",&u,&k);
            for(int j=0;j<k;j++){
                scanf("%d%d",&v,&w);
                if(map1[u][v]>w)
                    map1[u][v]=w;
            }
        }
        u=108;
        memset(flag,0,sizeof(flag));
        flag[0]=1;
        for(int i=0;i<n;i++)
            result[i]=map1[0][i];
        for(int i=0;i<n;i++){
            int minn=inf;
            for(int j=0;j<n;j++)
                if(!flag[j]&&result[j]<minn){
                    minn=result[j];
                    u=j;
                }
                flag[u]=1;
                for(int k=0;k<n;k++)
                    if(map1[u][k]!=inf&&result[k]>result[u]+map1[u][k])
                        result[k]=result[u]+map1[u][k];
        }
        for(int i=0;i<n;i++)
            printf("%d %d\n",i,result[i]);



    }
    return 0;
}

