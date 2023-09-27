#include <iostream>
#include <algorithm>
using namespace std;
int mday(int y,int m){
  if(y%3==0) return 20;
  if(m%2==1) return 20;
  return 19;
}

int tbl[1000][50][50];

int main(){
  int cnt = 0;
  for(int y=1;y<1000;++y){
    for(int m=1;m<=10;++m){
      for(int d=1;d<=mday(y,m);++d){
	tbl[y][m][d] = ++cnt;
      }
    }
  }
  int n;
  cin >> n;
  while(n--){
    int y,m,d;
    cin >> y >> m >> d;
    cout << 196470-tbl[y][m][d]+1 << endl;
  }
}