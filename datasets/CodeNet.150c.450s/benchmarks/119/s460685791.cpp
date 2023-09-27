#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS=1e-10;
const ll INF=1000000000;
int w,h;
int c[60][60];
bool visited[60][60];
int dx[8]={0,1,0,-1,1,-1,1,-1};
int dy[8]={1,0,-1,0,1,1,-1,-1};
bool field(int x,int y){
    if(x>=0&&x<w&&y>=0&&y<h){
        return true;
    }
    return false;
}
int dfs(int x,int y){
    if(visited[y][x]){
        return 0;
    }
    visited[y][x]=true;
    for(int i=0;i<8;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(field(nx,ny)&&c[ny][nx]){
            dfs(nx,ny);
        }
    }
    return 1;
}
int main(){
    while(cin>>w>>h,w+h){
        memset(visited,false,sizeof(visited));
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin>>c[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(c[i][j]){
                    ans+=dfs(j,i);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
