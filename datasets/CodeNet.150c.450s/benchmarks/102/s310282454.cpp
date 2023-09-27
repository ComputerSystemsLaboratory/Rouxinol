#include <iostream>
using namespace std;
void func(int x,int y);
int h,w;
char a[111][111];
int dx[4]={0,-1,0,1};
int dy[4]={-1,0,1,0};
int nx,ny;
int cnt=0;
int main(){
  int fx,fy;
  while(1){
    cin >> w >> h;
    if(h==0 && w==0)break;
    for(int i=1;i<=h;i++){
      for(int j=1;j<=w;j++){
	cin >> a[i][j];
	if(a[i][j]=='@'){
	  fx=i;
	  fy=j;
	}
      }
    }
    func(fx,fy);
    cout << cnt << endl;
    cnt=0;
  }
}


void func(int x,int y){
  cnt++;
  a[x][y]='0';
  for(int i=0;i<4;i++){
    nx=dx[i]+x;
    ny=dy[i]+y;
    if(nx<=h && nx>=1 && ny<=w && ny>=1 && a[nx][ny]!='#' && a[nx][ny]!='0'){
      func(nx,ny);
    }
  }
}