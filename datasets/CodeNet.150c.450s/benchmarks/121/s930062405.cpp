#include<iostream>

using namespace std;
int W,H;
char map[101][101];
int dir[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
void dfs(int x,int y,char ch){
  map[x][y] = '.';
  int newx,newy;
  for(int i = 0 ; i < 4 ; i ++){
    newx = dir[i][0]+x;
    newy = dir[i][1]+y;
    if(newx>=0&&newy>=0&&newx<H&&newy<W&&map[newx][newy]==ch)
      dfs(newx,newy,ch);
  }
}
int main(void){
  int cnt ;
  char ch;
  while(cin>>H>>W&&W+H){
    cnt = 0;
    for(int i = 0 ; i < H ; i ++)
      for(int j = 0 ; j < W ; j ++)
        cin>>map[i][j];
    for(int i = 0 ; i < H ; i ++)
      for(int j = 0 ; j < W ; j ++){
        ch=map[i][j];
        if(ch!='.'){
          cnt++;
          dfs(i,j,ch);
        }
      }
    cout<<cnt<<endl;
  }
  

}