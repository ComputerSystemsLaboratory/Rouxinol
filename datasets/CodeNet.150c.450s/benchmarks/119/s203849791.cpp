#include <iostream>
using namespace std;
void dfs(int,int);
int data[52][52];
int main(){
  int w,h,i,j,cnt;
  while(1){
    cnt=0;
    cin >> w >> h;
    if(w==0&&h==0) break;
    for(i=0;i<=h+1;i++){
      for(j=0;j<=w+1;j++){
	data[i][j]=0;
      }
    }
    for(i=1;i<=h;i++){
      for(j=1;j<=w;j++){
	cin >> data[i][j];
      }
    }
    for(i=1;i<=h;i++){
      for(j=1;j<=w;j++){
        if(data[i][j]==1){
	  dfs(i,j);
	  cnt++;
	}
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
void dfs(int i,int j){
  if(data[i][j]==0) return ;
  data[i][j]=0;
  dfs(i-1,j);
  dfs(i+1,j);
  dfs(i,j-1);
  dfs(i,j+1);
  dfs(i-1,j-1);
  dfs(i-1,j+1);
  dfs(i+1,j-1);
  dfs(i+1,j+1);
}