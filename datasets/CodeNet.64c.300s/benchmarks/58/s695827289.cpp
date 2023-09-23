#include <iostream>
using namespace std;

char p[100][100];
int n,m,ans;
int dx[4] = {1,0,-1,0},dy[4] = {0,1,0,-1};

void dfs(int x,int y,char s)
{
    p[x][y] = 'X';
    int i;
    for(i = 0;i < 4;i++){
        int xx = x + dx[i],yy = y + dy[i];
        if(xx >= 0 && yy >= 0 && xx < m && yy < n){
            if(p[xx][yy] == s)
                dfs(xx,yy,s);
        }
    }
}

int main(void)
{
    while(cin>>n>>m,n && m){
        int i,j;
        ans = 0;
        for(j = 0;j < n;j++){
            for(i = 0;i < m;i++){
                cin>>p[i][j];
            }
        }
        for(j = 0;j < n;j++){
            for(i = 0;i < m;i++){
                if(p[i][j] != 'X'){
                    ans++;
                    dfs(i,j,p[i][j]);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}