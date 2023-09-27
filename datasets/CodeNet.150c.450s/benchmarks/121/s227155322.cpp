#include <iostream>
using namespace std;
void func(int x,int y);
int h,w;
char c;
char a[111][111];
int dx[4]={0,-1,0,1};
int dy[4]={-1,0,1,0};
int nx,ny;
int main(){
  int count=0;
  while(1){
    cin >> h >> w;
    if(h==0 && w==0)break;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin >> a[i][j];
      }
    }
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	if(a[i][j]!='.'){
	c=a[i][j];
	func(i,j);
	count++;
	}
      }
    }
    cout << count << endl;
    count=0;
  }
}
void func(int x,int y){
  if(x<0 || x>=h || y<0 || y>=w || c!=a[x][y])return;
  a[x][y]='.';
  for(int i=0;i<4;i++){
    nx=dx[i]+x;
    ny=dy[i]+y;
    func(nx,ny);
  }
}