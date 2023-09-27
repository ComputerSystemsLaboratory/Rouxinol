#include<iostream>
using namespace std;
int n,m;
char jz[105][105];
int count;
int xx[]={1,0,-1,0};
int yy[]={0,1,0,-1};
void dfs(int x,int y,char ttemp)
{
    int i,j,tx,ty;
    jz[x][y]='.';
    for(i=0;i<4;i++)
    {
        tx=x+xx[i];
        ty=y+yy[i];
        if(jz[tx][ty]!=ttemp||tx<0||ty<0||tx>=n||ty>=m)continue;
        dfs(tx,ty,ttemp);
    }
}
int main()
{
    while(cin>>n>>m&&n&&m)
    {
        int i,j;
        count=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            cin>>jz[i][j];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(jz[i][j]!='.')
                {
                    dfs(i,j,jz[i][j]);
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}