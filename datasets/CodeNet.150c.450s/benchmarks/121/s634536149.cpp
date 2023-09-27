#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
const int maxn = 110;
char a[maxn][maxn];
int vis[maxn][maxn], m , n,d[4][2] = {{0 , 1},{0 , -1},{1 , 0} ,{-1 ,0}};
void _fill(int x , int y){
    for(int i = 0 ; i < 4;i++){
        int xx = x + d[i][0];
        int yy = y + d[i][1];
        if(xx >= 0 && xx < n && yy >= 0 && yy < m){
            if(!vis[xx][yy]&&a[xx][yy] == a[x][y]){
                vis[xx][yy] = 1;
                _fill(xx , yy);
            }
        }
    }
}
void solve(){
    int res = 0;
    memset(vis,0,sizeof(vis));
    for(int i = 0 ; i < n;i++){
        for(int j = 0 ; j < m;j++){
            if(!vis[i][j]){
                res++;
                vis[i][j] = 1;
                _fill(i , j);
            }
        }
    }
    printf("%d\n",res);
}
int main()
{
    while(~scanf("%d%d",&n,&m)){
        if(n == 0 && m == 0) {break;}
        for(int i = 0 ; i < n;i++){scanf("%s",a[i]);}
        solve();
    }
}