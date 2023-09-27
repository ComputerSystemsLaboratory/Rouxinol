#include <iostream>
#include <cstdio>
using namespace std;

char a[20][20];
int w,h,cx,cy,count=1;

void check(int x,int y){
  if (a[y][x]=='.'){
    count ++;
    a[y][x]='*';
    if (x>0) check(x-1,y);
    if (x<w-1) check(x+1,y);
    if (y>0) check(x,y-1);
    if (y<h-1) check(x,y+1);
  }
}

int main(){
  cin >> w >> h;
  while (w!=0||h!=0){
    for (int i=0;i<h;i++){
      for (int j=0;j<w;j++){
	cin >> a[i][j];
	if (a[i][j]=='@'){
	  cx=j;
	  cy=i;
	}
      }
    }

    if (cx>0) check(cx-1,cy);
    if (cx<w-1) check(cx+1,cy);
    if (cy>0) check(cx,cy-1);
    if (cy<h-1) check(cx,cy+1);
    
    cout << count << endl;
    count =1;
    cin >> w >> h;
  }
  return 0;
}