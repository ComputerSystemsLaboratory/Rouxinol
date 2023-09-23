#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

char s[105][105]= {'\0'};
int n, m;

int movx[4]= {-1,0,1,0};
int movy[4]= {0,1,0,-1};

void dfs(int x,int y,char c)
{
    for(int i=0; i<4; i++)
    {
        if(s[x+movx[i]][y+movy[i]]==c)
        {
            s[x+movx[i]][y+movy[i]]='.';
            dfs(x+movx[i],y+movy[i],c);
        }
    }
}

int main()
{
    //freopen("in.in","r",stdin);
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        char c=getchar();
        int ans=0;
        if(n==0&&m==0)break;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
                scanf("%c",&s[i][j]);
            c=getchar();
        }
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
                if(s[i][j]=='@')
                {
                    ans++;
                    s[i][j]='.';
                    dfs(i,j,'@');
                }
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
                if(s[i][j]=='#')
                {
                    ans++;
                    s[i][j]='.';
                    dfs(i,j,'#');
                }
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
                if(s[i][j]=='*')
                {
                    ans++;
                    s[i][j]='.';
                    dfs(i,j,'*');
                }
        printf("%d\n",ans);
    }
    return 0;
}