#include <iostream>
using namespace std;
void dfs(int x,int y,char c);
int h,w;
char mas[102][102];
int flag[102][102];
int main(){
  int sum;
  int i,j;
  while(1){
    cin >> h >> w;
    sum = 0;
    if(h == 0 && w == 0)break;
    for(i = 0;i < 102;i++){
      for(j = 0;j < 102;j++){
	flag[i][j] = 0;
      }
    }
    for(i = 0;i < h;i++){
      for(j = 0;j < w;j++){
	cin >> mas[i][j];
      }
    }
    for(i = 0;i < h;i++){
      for(j = 0;j < w;j++){
	if(flag[i][j] == 0){
	  sum++;
	  dfs(j,i,mas[i][j]);
	}
      }
    }
    cout << sum << endl;
  }
  return(0);
}
void dfs(int x,int y,char c){
  int mx[4] = {1,0,-1,0};
  int my[4] = {0,1,0,-1};
  if(x < 0 || y < 0 || h <= y || w <= x)return;
  if(c != mas[y][x])return;
  if(flag[y][x] != 0)return;
  flag[y][x] = 1;
  for(int i = 0;i < 4;i++){
    dfs(x + mx[i],y + my[i],c);
  }
  return;
}