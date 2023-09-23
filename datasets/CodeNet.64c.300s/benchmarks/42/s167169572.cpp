#include<bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  while( cin >> N, N ) {
    int treasure[21][21] = {{0}};
    for(int i=0; i<N; i++) {
      int x, y;
      cin >> x >> y;
      treasure[y][x] = 1;
    }

    int x = 10, y = 10;
    int cnt = 0;
    cin >> M;
    while( M-- ) {
      char d;
      int l;
      cin >> d >> l;
      if( d == 'N' ) {
	for(int i=y; i<=y+l; i++) {
	  if( treasure[i][x] ) cnt++, treasure[i][x] = 0;
	}
	y += l;
      }
      if( d == 'E' ) {
	for(int i=x; i<=x+l; i++) {
	  if( treasure[y][i] ) cnt++, treasure[y][i] = 0;
	}
	x += l;
      }
      if( d == 'S' ) {
	for(int i=y; i>=y-l; i--) {
	  if( treasure[i][x] ) cnt++, treasure[i][x] = 0;
	}
	y -= l;
      }
      if( d == 'W' ) {
	for(int i=x; i>=x-l; i--) {
	  if( treasure[y][i] ) cnt++, treasure[y][i] = 0;
	}
	x -= l;
      }
    }

    if( cnt == N ) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}