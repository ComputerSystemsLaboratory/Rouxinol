#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<queue>
using namespace std;
const int maxn = 105;
char Map[maxn][maxn];
int n,m,dx[4]={0,0,-1,1},dy[4]={1,-1,0,0};
void dfs(int x,int y,char s){
    Map[x][y]='x';
    for(int i=0;i<4;i++){
        int nx=dx[i]+x;
        int ny=dy[i]+y;
        if(0<=nx&&nx<n&&0<=ny&&ny<m&&Map[nx][ny]==s){
            dfs(nx,ny,s);
        }
    }
}
int main()
{
    //freopen("date.txt", "r", stdin);
    while(cin>>n>>m&&(n+m)){
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>Map[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(Map[i][j]!='x'){
                    res++;
                    dfs(i,j,Map[i][j]);
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}