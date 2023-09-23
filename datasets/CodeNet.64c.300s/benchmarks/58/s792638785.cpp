#include <iostream>  
#include <cstdio>  
#include <cstring>  
  
using namespace std;  
  
#define MAX_W 101  
  
char map[MAX_W][MAX_W];  
int w,h;  
bool vis[MAX_W][MAX_W];  
int dx[]={1,-1,0,0};  
int dy[]={0,0,1,-1};  
  
void dfs(int x,int y)  
{  
    vis[y][x]=true;  
  
    for(int i=0;i<4;i++)  
    {  
        int nx=x+dx[i],ny=y+dy[i];  
        if(nx>=0 && nx<w && ny>=0 && ny<h && !vis[ny][nx] && map[y][x]==map[ny][nx])  
            dfs(nx,ny);  
    }  
}  
  
int main()  
{  
    scanf("%d%d",&h,&w);  
  
    while(w!=0 || h!=0)  
    {  
        for(int i=0;i<h;i++)  
        {  
            scanf("%s",map[i]);  
        }  
  
        memset(vis,0,sizeof(vis));  
  
        int cnt=0;  
  
        for(int i=0;i<h;i++)  
        for(int j=0;j<w;j++)  
            if(!vis[i][j])  
            {  
                dfs(j,i);  
                cnt++;  
            }  
  
        printf("%d\n",cnt);  
  
        scanf("%d%d",&h,&w);  
    }  
  
    return 0;  
}  