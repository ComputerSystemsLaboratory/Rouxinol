#include <iostream>
using namespace std;

char map[101][101];
char moji;
int H,W;

void bfs( int i,int j ) {
  if ( map[i][j] != moji ) return;
  if ( map[i][j] == moji ) {
    map[i][j] = '$';
    if( i+1 <= H ) bfs( i+1,j );
    if( i-1 >= 1 ) bfs( i-1,j );
    if( j+1 <= W ) bfs( i,j+1 );
    if( j-1 >= 1 ) bfs( i,j-1 );
  }

}

int main(){
  while ( cin >> H >> W, H+W ) {
    for ( int i = 1; i <= H; i++ ) {
      for ( int j = 1; j <= W; j++ ) cin >> map[i][j];
    }
    int cnt = 0;
    for ( int i = 1; i <= H; i++ ) {
      for ( int j = 1; j <= W; j++ ) {
	if ( map[i][j] == '@' ){
	  cnt++;
	  moji = '@';
	  bfs(i,j);
	} else if ( map[i][j] == '#' ) {
	  cnt++;
	  moji = '#';
	  bfs(i,j);
	} else if ( map[i][j] == '*' ) {
	  cnt++;
	  moji = '*';
	  bfs(i,j);
	}
      }
    }
    cout << cnt << endl;
     
  }
  return 0;
}