#include<iostream>
#include<deque>
#define pb push_back
#define pf push_front
using namespace std ;

char map[1001][1001] = {} ;
char num[] = { '0','1','2','3','4','5','6','7','8','9' } ;
int num_map[1001][1001] = {} ;
int dx[] = { -1,0,1,0 } ;
int dy[] = { 0,-1,0,1 } ;
deque<int> qx ;
deque<int> qy ;
deque<int> qc ;

int main(){
	
	int h , w , n ;
	int nx , ny , nc ;
	int ans = 0 ;
	
	cin >> h >> w >> n ;
	for( int i=0 ; i<h ; i++ ){
		for( int j=0 ; j<w ; j++ ){
			cin >> map[i][j] ;
			if( map[i][j] == 'S' ){
				qy.pb(i) ;
				qx.pb(j) ;
			}
		}
	}
	
	for( int i=1 ; i<=n ; i++ ){
		num_map[qy.front()][qx.front()] = i ;
		qc.pb(0) ;
		while(1){
			nx = qx.front() ;
			ny = qy.front() ;
			nc = qc.front() ;
			
			if( map[ny][nx] == num[i] ) break ;
			for( int j=0 ; j<4 ; j++ ){
				if( 0 <= ny+dy[j] && ny+dy[j] < h &&
					0 <= nx+dx[j] && nx+dx[j] < w &&
					num_map[ny+dy[j]][nx+dx[j]] < i &&
					map[ny+dy[j]][nx+dx[j]] != 'X' ){
						num_map[ny+dy[j]][nx+dx[j]] = i ;
						qy.pb( ny+dy[j] ) ;
						qx.pb( nx+dx[j] ) ;
						qc.pb( nc+1 ) ;
				}
			}
			qx.pop_front() ;
			qy.pop_front() ;
			qc.pop_front() ;
		}
		qy.clear() ;
		qx.clear() ;
		qc.clear() ;
		qy.pb(ny) ;
		qx.pb(nx) ;
		ans += nc ;
	}
	
	cout << ans << endl ;
	
return 0;
}