#include <iostream>  
#include <stdio.h>  
#include <string.h>  
using namespace std;  
int sum,n,m;  
int k;  
char map[105][105];  
int dx[10]={-1,1,0,0};  
int dy[10]={0,0,-1,1};  
void dfs1(int x,int y)  
{  
    if(x<0||x>=n||y<0||y>=m) return ;  
    if(map[x][y]=='#')  
    {  
        map[x][y]=' ';  
        for(int i=0;i<4;i++)  
        {  
            dfs1(x+dx[i],y+dy[i]);  

        }  
    }  
}  
void dfs2(int x,int y)  
{  
    if(x<0||x>=n||y<0||y>=m) return ;  
    if(map[x][y]=='@')  
    {  
        map[x][y]=' ';  
        for(int i=0;i<4;i++)  
        {  
            dfs2(x+dx[i],y+dy[i]);  

        }  
    }  
}  
void dfs3(int x,int y)  
{  
    if(x<0||x>=n||y<0||y>=m) return ;  
    if(map[x][y]=='*')  
    {  
        map[x][y]=' ';  
        for(int i=0;i<4;i++)  
        {  
            dfs3(x+dx[i],y+dy[i]);  

        }  
    }  
}  
int main()  
{  
    while(scanf("%d%d",&n,&m)!=EOF)  
    {  getchar();
        if(m==0||n==0) break;  
        for(int i=0;i<n;i++)  
        {  
            for(int j=0;j<m;j++)  
            {  
              scanf("%c",&map[i][j]) ;
            }  
            getchar();
        }
        sum=0;  
        for(int i=0;i<n;i++)  
        {  
            for(int j=0;j<m;j++)  
            {  
                if(map[i][j]=='#')  
                {  
                    sum++;  
                    dfs1(i,j);  
                }  
                  if(map[i][j]=='@')  
                {  
                    sum++;  
                    dfs2(i,j);  
                }  
                  if(map[i][j]=='*')  
                {  
                    sum++;  
                    dfs3(i,j);  
                }  
            }  
        }  
        printf("%d\n",sum);  
    }  
    return 0;  
}  
