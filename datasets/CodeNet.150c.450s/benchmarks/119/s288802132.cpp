#include<iostream>
using namespace std;

int m[51][51];
bool v[51][51];
int h,w;
int dx[8]={-1,-1,0,1,1,1,0,-1};
int dy[8]={0,-1,-1,-1,0,1,1,1};
void dfs(int x,int y){
    if(v[y][x])return;
    v[y][x]=1;
    for(int i=0;i<8;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx>=0&&nx<w&&ny>=0&&ny<h&&!v[ny][nx]&&m[ny][nx]){
            dfs(nx,ny);
        }
    }
}
int main(){
    while(cin>>w>>h,h){
        int c=0;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin>>m[i][j];
                v[i][j]=0;
            }
        }
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(!v[i][j]&&m[i][j]){
                    dfs(j,i);
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}