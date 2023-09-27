#include<iostream>
using namespace std ;

int h , w , ans ;
char map[101][101] = {} ;
int dx[] = { -1,0,1,0 } ;
int dy[] = { 0,-1,0,1 } ;

void count( int y , int x , char f ){
	map[y][x] = '0' ;
	
	for( int k=0 ; k<4 ; k++ ){
		if( 0 <= y+dy[k] && y+dy[k] < h &&
			0 <= x+dx[k] && x+dx[k] < w &&
			map[y+dy[k]][x+dx[k]] == f )
				count( y+dy[k] , x+dx[k] , f ) ;
	}
}

int main(){
	
	while(1){
		cin >> h >> w ;
		if( h==0 && w==0 ) break ;
		
		for( int i=0 ; i<h ; i++ )
			for( int j=0 ; j<w ; j++ )
				cin >> map[i][j] ;
		
		ans = 0 ;
		for( int i=0 ; i<h ; i++ ){
			for( int j=0 ; j<w ; j++ ){
				if( map[i][j] != '0' ){
					count( i , j , map[i][j] ) ;
					ans++ ;
				}
			}
		}
		
		cout << ans << endl ;
	}
	
return 0;
}