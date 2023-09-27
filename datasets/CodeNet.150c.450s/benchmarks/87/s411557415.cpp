#include<bits/stdc++.h>

#define REP(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

int h,arr[10][5];
bool erase[10][5];

void compute(){
  bool update = true;
  int score = 0;
  while( update ){
    memset(erase,false,sizeof(erase));
    update = false;
    for(int y=h-1;y>=0;y--){
      for(int x=0;x<3;x++){
        if( arr[y][x] == 0 ) continue;
        int cnt = 1;
        REP(x2,x+1,5) {
          if( arr[y][x] != arr[y][x2] ) break;
          ++cnt;
        }
        if( cnt >= 3 ) {
          update = true;
          REP(x2,x,5) {
            if( arr[y][x] != arr[y][x2] ) break;
            erase[y][x2] = true;
          } 
        }
      }
    }
    rep(y,h) rep(x,5) if( erase[y][x] ) { score += arr[y][x]; arr[y][x] = 0; }
    for(int y=h-1;y>=0;y--){
      for(int x=0;x<5;x++){
        if( arr[y][x] == 0 ) {
          int ny = y;
          while( 1 ){
            ny -= 1;
            if( ny < 0 ) break;
            if( arr[ny][x] ) { swap(arr[y][x],arr[ny][x]); break; }
          }
        }
      }
    }
  } 
  cout << score << endl;
}

int main(){
  while( cin >> h, h ){
    rep(i,h) rep(j,5) cin >> arr[i][j];
    compute();
  }
  return 0;
}