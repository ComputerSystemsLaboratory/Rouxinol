#include <iostream>
using namespace std;

int map[50][50];
int w,h,label;

void check(int x,int y,int lnum){
  map[y][x]=lnum;
  if (x>0){
    if (map[y][x-1]==1) check(x-1,y,lnum);
    if (y>0){
      if (map[y-1][x-1]==1) check(x-1,y-1,lnum);
    }
    if (y<h-1){
      if (map[y+1][x-1]==1) check(x-1,y+1,lnum);
    }
  }
  if(x<w-1){
    if (map[y][x+1]==1) check(x+1,y,lnum);
    if (y>0){
      if (map[y-1][x+1]==1) check(x+1,y-1,lnum);
    }
    if (y<h-1){
      if (map[y+1][x+1]==1) check(x+1,y+1,lnum);
    }
  }
  if (y>0){
    if (map[y-1][x]==1) check(x,y-1,lnum);
  }
  if (y<h-1){
    if (map[y+1][x]==1) check(x,y+1,lnum);
  }
}

int main(){
  cin >> w >> h;
  while (w!=0||h!=0){
    label=2;
    for (int i=0;i<h;i++)
      for (int j=0;j<w;j++)
	cin >> map[i][j];

    for (int i=0;i<h;i++){
      for (int j=0;j<w;j++){
	if (map[i][j]==1){
	  //cout << "(" << map[i][j] << ")";
	  check(j,i,label++);
	}
      }
    }
    //cout << "(" << label << ")";

    cout << (label-2) << endl;

    cin >> w >> h;
 }
  return 0;
}