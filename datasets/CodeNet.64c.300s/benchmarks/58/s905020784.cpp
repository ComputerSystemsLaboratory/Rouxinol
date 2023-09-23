#include<cstdio>
#include<cstring>
#include<queue>
#include<algorithm>
using namespace std;
int n,m,ne[4][2]={0,1,0,-1,1,0,-1,0};
bool vis[103][103];
char mmp[103][103];
void dfs(int x,int y,char c)
{
    for(int i=0;i<4;i++){
        int tx=x+ne[i][0];
        int ty=y+ne[i][1];
        if(tx<0||tx>=n||ty<0||ty>=m||vis[tx][ty])
            continue;
        if(mmp[tx][ty]==c){
            vis[tx][ty]=true;
            dfs(tx,ty,c);
        }
    }
}
int main()
{
    while(scanf("%d %d",&n,&m)&&n&&m){
        int sum=0;
        char ch;
        memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++)
            scanf("%s",&mmp[i]);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]){
                    vis[i][j]=true;
                    sum++;
                    ch=mmp[i][j];
                    dfs(i,j,ch);
                }
            }
        }
        printf("%d\n",sum);
    }
	return 0;
}