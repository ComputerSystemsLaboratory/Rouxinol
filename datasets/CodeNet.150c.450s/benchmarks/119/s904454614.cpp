#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int m[55][55]={};

void fill(int x,int y){
  m[x][y]=0;
  for(int i=-1;i<2;++i){
    for(int j=-1;j<2;++j){
      if(m[x+i][y+j]==1) fill(x+i,y+j);
    }
  }
}

int main(){
  int w,h;
  while(1){
    cin >> w >> h;
    if(w == 0 && h ==0) break;
    
    for(int i=1;i<=h;++i)
      for(int j=1;j<=w;++j)
	cin >> m[i][j];
    int cnt=0;
    for(int i=1;i<=h;++i)
      for(int j=1;j<=w;++j)
	if(m[i][j]==1){
	  fill(i,j);
	  cnt ++;
	}

    cout << cnt << endl;
  }
  return 0;
}

