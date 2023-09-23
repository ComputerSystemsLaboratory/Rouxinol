#include <cstdio>
#include <algorithm>
#include <cstring> 
using namespace std;
const int N=10,INF=0x3f3f3f3f;
int n,d[N][N],c,x,y,m;
int main(){
    while(~scanf("%d",&m),m){
        memset(d,INF,sizeof(d)); n=0;
        while(m--){
            scanf("%d%d%d",&x,&y,&c);
            d[x][y]=d[y][x]=c;
            n=max(n,max(x,y));
        }
        for(int k=0;k<=n;k++)
            for(int i=0;i<=n;i++)
                for(int j=0;j<=n;j++)d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
        int ans=INF,pos=0;
        for(int i=0;i<=n;i++){
            int tmp=0;
            for(int j=0;j<=n;j++)if(i!=j)tmp+=d[i][j];
            if(tmp<ans)ans=tmp,pos=i;
        }printf("%d %d\n",pos,ans);
    }return 0;
}