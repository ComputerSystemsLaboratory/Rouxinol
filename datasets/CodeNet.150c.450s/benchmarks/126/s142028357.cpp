#include <iostream>
#include <cstring>
using namespace std;
int mass[17][17];
int memo[17][17];

int solve( int x ,int y ,int maxx ,int maxy);
int main(){
  int n ,x ,y;
  int cx ,cy;
  while( true ){
    memset( mass ,0 ,sizeof( mass ) );
    memset( memo ,0 ,sizeof( memo ) );
    cin >> x >> y;
    if( x == 0 && y == 0 ) break;

    mass[y-1][x-1] = 2; // goal地点の指定
    
    cin >> n;
    for( int i=0 ; i<n ; i++ ){ // 行けない地点の指定
      cin >> cx >> cy;
      mass[cy-1][cx-1] = 1;
    }

    cout << solve( 0 ,0 ,x-1 ,y-1 ) << endl; // go 再帰
  }
}


int solve( int x ,int y ,int maxx ,int maxy ){
  if( memo[y][x] != 0 ) return memo[y][x];
  else if( mass[y][x] == 2 ) return 1;      // goal
  else if( x > maxx || y > maxy ) return 0;  // どっか行った
  else if( mass[y][x] == 1 ) return 0; // いけねぇ 
  else return memo[y][x] = (solve( x+1 ,y ,maxx ,maxy ) + solve( x ,y+1 ,maxx ,maxy ) );
}