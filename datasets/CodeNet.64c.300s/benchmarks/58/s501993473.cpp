#include<stdio.h>
#include<iostream>
using namespace std;
int i,j,c=0;
int m,n;
char rbq;
char map[101][101];
void dfs(char map[101][101],int i,int j)
{
    map[i][j]='.';
    if(i-1>-1&&map[i-1][j]==rbq)
        dfs(map,i-1,j);
    if(i+1<m&&map[i+1][j]==rbq)
        dfs(map,i+1,j);
    if(j-1>-1&&map[i][j-1]==rbq)
        dfs(map,i,j-1);
    if(j+1<n&&map[i][j+1]==rbq)
        dfs(map,i,j+1);
}
int main()
{
    while(scanf("%d%d",&m,&n)&&m)
    {
        c=0;
        for(i=0;i<=m-1;i++)
            scanf("%s",map[i]);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            {
                if(map[i][j]!='.')
                {
                    rbq = map[i][j];
                    dfs(map,i,j);
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}