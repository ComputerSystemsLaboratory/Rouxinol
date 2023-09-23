#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
char map[150][150]; char bb;
int n,m;int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};  
void dfs(int x,int y)
{   if(x<0||x>=n||y<0||y>=m) return ;  
    if(map[x][y]!=bb) return ;  
    map[x][y]='.';  
    for(int i=0;i<4;i++) {  
        dfs(x+dx[i],y+dy[i]);  
    }  
}
int main()
{    int i,j,sum; 
     while(scanf("%d%d",&n,&m)!=EOF&&(n!=0||m!=0))
     {
	 
     for(i=0;i<n;i++)
     scanf("%s",map[i]);
     sum=0;
     for(i=0;i<n;i++)
     for(j=0;j<m;j++)
     {  if(map[i][j]=='.') continue;
         bb=map[i][j];
         dfs(i,j);
         sum++;
	 }
	 printf("%d\n",sum);}
	 return 0;
}
