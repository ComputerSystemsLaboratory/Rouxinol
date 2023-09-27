#include <iostream>
using namespace std;
  int a,b,n,tx,ty;
  int stp[16][16];

int check(int x,int y){
  int ret=0;
  if (x==a-1&&y==b-1) return 1;
  if (!stp[x+1][y]&&x+1<a) ret += check(x+1,y);
  if (!stp[x][y+1]&&y+1<b) ret += check(x,y+1);
  return ret;
}

int main(){
  while (1){
    cin >> a >> b;
    if (a==0&&b==0) break;
    cin >> n;

    for (int i=0;i<16;i++)
      for (int j=0;j<16;j++)
	stp[i][j]=0;

    for (int i=0;i<n;i++){
      cin >> tx >> ty;
      stp[tx-1][ty-1]=1;
    }
    cout << check(0,0) << endl;
  }

  return 0;
}