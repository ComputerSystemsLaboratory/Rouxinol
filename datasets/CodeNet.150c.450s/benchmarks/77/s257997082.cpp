#include <iostream>
using namespace std;
int main( void )
{
  while( 1 ){
    int N,M,x,y,r,dx,dy;
    char dir;
    int d[21][21];
    for( x=0; x<=20; x++ ){
      for( y=0; y<=20; y++ ){
        d[x][y] = 0;
      }
    }

    cin >> N;
    if( N == 0 ) break;
    for( int i=0; i<N; i++ ){
      cin >> x >> y;
      d[x][y] = 1;
    }

    cin >> M;
    x = y = 10;
    int n = d[x][y];
    d[x][y] = 0;
    for( int i=0; i<M; i++ ){
      cin >> dir >> r;
      switch( dir ){
        case 'N' : dx=0; dy=1; break;
        case 'E' : dx=1; dy=0; break;
        case 'S' : dx=0; dy=-1; break;
        case 'W' : dx=-1; dy=0; break;
      }
      for( int j=0; j<r; j++ ){
        x += dx; y += dy;
        n += d[x][y];
        d[x][y] = 0;
      }
    }
    if( N == n ){
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}