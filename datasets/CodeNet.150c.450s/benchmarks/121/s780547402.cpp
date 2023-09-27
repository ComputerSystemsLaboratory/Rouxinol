#include <iostream>
#include <string>
using namespace std;

int h,w;
char f[105][105];
// string f[105];
int dx[4]={0,1,0,-1};
int dy[4]={-1,0,1,0};

void dfs(int y, int x, char c){
    f[y][x]='.';
    for(int i=0; i<4; i++){
        int nx=x+dx[i];
        int ny=y+dy[i];

        if(nx>=0 || nx<w || ny>=0 || ny<h){
            if(f[ny][nx]==c){
                dfs(ny, nx, c);
            }
        }       
    }
}

int main(){
    int cnt=0;

    while(1){
        cin>>h>>w;
        if(h==0&&w==0)return 0;
        for(int i=0; i<h; i++)cin>>f[i];
        
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                char current = f[i][j];
                if(current!='.'){
                    dfs(i,j,current);
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
        cnt=0;
    }
}