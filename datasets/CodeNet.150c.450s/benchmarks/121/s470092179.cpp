#include<iostream>
using namespace std;
const int MAX_H=100,MAX_W=100;
char field[120][120];
int h,w,cnt;
const int dx[4]={1,-1,0,0},dy[4]={0,0,-1,1};
void dfs(int y,int x,char kind){
    if(y<0 || y>=h || x<0 || x>=w || field[y][x]!=kind)return;
    field[y][x]='.';
    for(int i=0;i<4;i++)dfs(y+dy[i],x+dx[i],kind);
    return;
}
int main(){
    while(cin>>h>>w){
        if(!w && !h)break;
        for(int i=0;i<h;i++)cin>>field[i];
        cnt=0;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
              if(field[i][j]!='.'){
                cnt++;
                dfs(i,j,field[i][j]);
              }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}