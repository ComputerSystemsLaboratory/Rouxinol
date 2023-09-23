#include <iostream>
using namespace std;
int n,m;
char map[110][110];
void dfs(int x,int y,char ch)
{   
    int dir[4][2]={1,0,-1,0,0,1,0,-1};
    int x1,y1;
    map[x][y]='.';
    for(int i=0;i<4;i++)
    {
        x1=x+dir[i][0];
        y1=y+dir[i][1];
        if(x1>=0&&x1<n&&y1>=0&&y1<m&&map[x1][y1]==ch)
        dfs(x1,y1,ch);
    }
} 

int main(int argc, char *argv[])
{   
    char ch;
    while(cin>>n>>m)
    {   
        int ans=0;
        if(n==0||m==0) break;

        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>map[i][j];
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(map[i][j]!='.')
                {
                ch=map[i][j];
                ans++;
                dfs(i,j,ch);
                }   
    cout<<ans<<endl;             
    }
    return 0;
}