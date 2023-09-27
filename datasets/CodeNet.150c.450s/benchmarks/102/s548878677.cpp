#include <iostream>
using namespace std;
int ch[23][23],cnt;
void dfs(int,int);
int main(){
  int w,h,i,j,k,l;
  string in[21];
  while(1){
    cnt=0;
    cin >> w >> h;
    if(w==0&&h==0) break;
    for(i=0;i<h;i++){
      cin >> in[i];
    }
    for(i=0;i<h+2;i++){
      for(j=0;j<w+2;j++){
	ch[i][j]=1;
      }
    }
    for(i=0,k=1;k<h+1;i++,k++){
      for(j=0,l=1;l<w+1;l++,j++){
	if(in[i][j]=='.') ch[k][l]=0;
	else if(in[i][j]=='#') ch[k][l]=1;
	else ch[k][l]=2;
      }
    }
    for(i=1;i<=h;i++){
      for(j=1;j<=w;j++){
	if(ch[i][j]==2) dfs(i,j);
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
void dfs(int i,int j){
  if(ch[i][j]==1) return ;
  ch[i][j]=1;
  cnt++;
  dfs(i+1,j);
  dfs(i-1,j);
  dfs(i,j-1);
  dfs(i,j+1);
}