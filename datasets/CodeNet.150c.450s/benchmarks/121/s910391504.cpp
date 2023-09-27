#include <cstdio>
#include <iostream>
using namespace std;
const int maxn = 100+10;
char cmap[maxn][maxn],ch;
int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
int m,n,k;

void dfs(int x,int y,char ch){
    for(int i=0;i<4;++i){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx>=0&&nx<m&&ny>=0&&ny<n&&cmap[nx][ny]==ch){
            cmap[nx][ny]='0';
            dfs(nx,ny,ch);
        }
    }
}

int main ()
{
    while(scanf("%d%d",&m,&n)&&m>0&&n>0) {
        k=0;
        for(int i=0; i<m; ++i)
            for(int j=0; j<n; ++j)
                cin>>cmap[i][j];
        for(int i=0; i<m; ++i)
            for(int j=0; j<n; ++j)
                if(cmap[i][j]!='0') {
                    dfs(i,j,cmap[i][j]);
                    k++;
                }
        printf("%d\n",k);
    }
    return 0;
}