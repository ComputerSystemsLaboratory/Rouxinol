#include <iostream>
#include <algorithm>
#define MAX 10
#define INF 9999999

using namespace std;

int v[MAX + 1];
int road[MAX + 1][MAX + 1];
bool visit[MAX + 1];
int n,mn,MN,Max;

int gettotalDistance(int now){ // ダイクストラ法

  fill( v , v + MAX + 1 , INF );
  fill( visit , visit + MAX + 1 , false );

  v[now] = 0;
  
  while(1){
    
    MN = INF;
    for( int i = 0 ; i <= Max ; i++ ){
      if( !visit[i] && v[i] < MN ){
	MN = v[i];
	mn = i;
      }
    }
    
    if( MN == INF ) break;
    visit[mn] = true;
    
    for( int i = 0 ; i <= Max ; i++ ){
      int t = road[mn][i] + v[mn];
      v[i] = min( v[i] , t );
    }
    
  }
  
  int total = 0;
  for( int i = 0 ; i <= Max ; i++ ) 
    total += v[i];
  
  return total;
}

int main(void){

  while( cin >> n , n ){

    for( int i = 0 ; i <= MAX ; i++ )
      for( int j = 0 ; j <= MAX ; j++ )
	road[i][j] = INF;

    int a,b,c; 
    Max = 0;
    for( int i = 0 ; i < n ; i++ ){
      cin >> a >> b >> c;
      road[a][b] = c;
      road[b][a] = c;
      Max = max( Max , max(a,b) );
    } 
    
    int ans = INF;
    int ansnum;
    for( int i = 0 ; i < Max ; i++ ){
      int ANS = gettotalDistance(i);
      if( ans > ANS ){
	ans = ANS;
	ansnum = i;
      }
    }
    cout << ansnum << " " << ans << endl;
    }
  return 0;
}