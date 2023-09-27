#include <string>
#include <iostream>
using namespace std;
  
int w,h,ans,dx[]={0,-1,0,1}, dy[]={-1,0,1,0};
char c[22][22];
 
void solve(int x,int y){
    ans++;
    c[x][y]='#';
    for(int i=0;i<4;i++){
        int nx=x+dx[i], ny=y+dy[i];
        if(0<=nx && nx<w && 0<=ny && ny<h && c[nx][ny]=='.')solve(nx,ny);
    }
}
 
int main(){
    while(cin>>w>>h, w){
        ans=0;
        int x,y;
        for(int i=0;i<h;i++){
            for(int j=0; j<w; j++){
                cin>>c[j][i];
                if(c[j][i]=='@')x=j,y=i;
            }
        }
        
        solve(x,y);
        cout<<ans<<endl;
    }
}