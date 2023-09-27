#include<bits/stdc++.h>
using namespace std;

int h,w;
int mas[60][60];

void solve(int x,int y){
  for(int i=-1;i<=1;i++){
    for(int j=-1;j<=1;j++){
      int nx = x + i;
      int ny = y + j;
      if(nx >= 0 && ny >= 0 && nx < w && ny < h && mas[ny][nx] == 1){
	mas[ny][nx] = 0;
	solve(nx,ny);
      }
    }
  }
  return;
}

int main(){
  while(cin >> w >> h , w){
    int cnt = 0;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin >> mas[i][j];
      }
    }
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	if(mas[i][j] == 1){
	  mas[i][j] = 0;
	  solve(j,i);
	  cnt++;
	}
      }
    }
    cout << cnt << endl;
  }
}
		     