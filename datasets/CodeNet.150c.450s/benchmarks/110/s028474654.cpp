#include <iostream>
#include <queue>
using namespace std;

#define INFTY 10000000

int d[1001][1001],n;
char map[1001][1001];
int h,w;
pair< int,int > T[10];

int bfs( pair<int, int> p1, pair<int, int> p2 ) {
  
  queue< pair<int,int> > Q;
  
  for ( int i = 1; i <= h; i++ ) {
    for ( int j = 1; j <= w; j++ ) d[i][j] = INFTY;
  }
  
  d[p1.first][p1.second] = 0;
  Q.push(p1);   
  int u,v;
    
  while ( !Q.empty() ) {
    p1 = Q.front(); Q.pop();
    u = p1.first;
    v = p1.second;
        	
    if ( map[u+1][v] != 'X' &&  u+1 <= h && d[u+1][v] == INFTY ) {
	p1.first = u+1;
	p1.second = v;
	d[u+1][v] = d[u][v]+1;
	Q.push(p1);
    } 
    if ( map[u][v+1] != 'X' && v+1 <= w && d[u][v+1] == INFTY ) {
	p1.first = u;
	p1.second = v+1;
	d[u][v+1] = d[u][v]+1;
	Q.push(p1);
    } 
    if ( map[u-1][v] != 'X' && u-1 >= 1 && d[u-1][v] == INFTY ) {
	p1.first = u-1;
	p1.second = v;
	d[u-1][v] = d[u][v]+1;
	Q.push(p1);
    } 
    if ( map[u][v-1] != 'X' && v-1 >= 1 && d[u][v-1] == INFTY ) {
	p1.first = u;
	p1.second = v-1;
	d[u][v-1] = d[u][v]+1;
	Q.push(p1);
      }
	
  }
  
  /* for ( int i = 1; i <= h; i++ ) {
    for ( int j = 1; j <= w; j++ )  cout << d[i][j] << " ";
    cout << endl;
  }

  cout << endl;
  */
  return d[p2.first][p2.second];

}

int main() {
  
  cin >> h >> w >> n;
  for ( int i = 1; i <= h; i++ ){
    for ( int j = 1; j <= w; j++ ) {
      cin >> map[i][j];
      if ( map[i][j] == 'S' ){
	T[0].first = i;
	T[0].second = j;
      }
    }
  }
  
  for ( int i = 1; i <= h; i++ ) {
    for ( int j = 1; j <= w; j++ ) {
      if ( map[i][j] >= '1' && map[i][j] <= '9' ) {
	T[ map[i][j]-'0' ].first = i;
	T[ map[i][j]-'0' ].second = j;
      }
    }
  }

  int ans = 0;
  for ( int i = 0; i < n; i++ ) ans += bfs( T[i], T[i+1] );

  cout << ans << endl;
     
  return 0;
}