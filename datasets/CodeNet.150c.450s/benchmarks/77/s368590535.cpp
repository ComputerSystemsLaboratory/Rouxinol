#include <iostream>
#include <algorithm>
using namespace std;
int grid[21][21];
int nowx,nowy;
void init(){
  nowx = 10,nowy = 10;
  for(int i = 0 ; i <= 20 ; i++ ){
    for(int j = 0 ; j <= 20 ; j++ ){
      grid[j][i] = 0;
    }
  }
}

void serch(int a,int b,int f){
  if(a > b)swap(a,b);
  if(f == 1){
    for(int i = a ; i <= b ; i++ )grid[nowx][i] = 0;
  }else {
    for(int i = a ; i <= b ; i++ )grid[i][nowy] = 0;
  }
}

bool check(){
  bool flag = true; 
  for(int i = 0 ; i <= 20 ; i++ ){
    for(int j = 0 ; j <= 20 ; j++ ){
      if(grid[j][i] == 1){flag = false;goto N;}
    }
  }
 N:;
  if(flag)return true;
  else return false;
}

int main(){
  int n;
  while( cin >> n,n ){
    init();
    for(int i = 0 ; i < n ; i++ ){
      int x,y;
      cin >> x >> y;
      grid[x][y] = 1;
    }
    cin >> n;
    for(int i = 0 ; i < n ; i++ ){
      char c;
      int move,f = 0,past;
      cin >> c >> move;
      if(c == 'N'){
	f = 1;
	past = nowy;
	nowy+=move;
      }else if(c == 'S'){
	f = 1;
	past = nowy;
	nowy-=move;
      }else if(c == 'E'){
	past = nowx;
	nowx+=move;
      } else {
	past = nowx;
	nowx-=move;
      }
      if(f == 0)serch(past,nowx,f);
      else serch(past,nowy,f);
    }
    if( check() )cout << "Yes" << endl;
    else cout << "No" << endl; 
  }
  return 0;
}