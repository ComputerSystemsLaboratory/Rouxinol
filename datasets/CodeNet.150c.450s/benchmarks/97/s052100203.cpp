#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int n,m,d ;
	int map[410][410] ;
	int dx[] = {-1,0,1,0} ;
	int dy[] = {0,1,0,-1} ;
	
	while( cin >> n , n ){
		for( int i=0 ; i<410 ; i++ )
			for( int j=0 ; j<410 ; j++ )
				map[i][j] = -1 ;
		
		int HL[2] = {200,200} ;
		int WL[2] = {200,200} ;
		int cnt = 1 ;
		map[200][200] = 0 ;
		
		for( int i=1 ; i<n ; i++ ){
			cin >> m >> d ;
			int p = cnt ;
			for( int j=HL[0] ; j<=HL[1] ; j++ ){
				for( int k=WL[0] ; k<=WL[1] ; k++ ){
					if( map[j][k] == m ){
						map[j+dy[d]][k+dx[d]] = cnt ;
						HL[0] = min( HL[0] , j+dy[d] ) ;
						HL[1] = max( HL[1] , j+dy[d] ) ;
						WL[0] = min( WL[0] , k+dx[d] ) ;
						WL[1] = max( WL[1] , k+dx[d] ) ;
						cnt++ ;
						break ;
					}
				}
				if( p != cnt ) break ;
			}
		}
		
		cout << WL[1]-WL[0]+1 << " " <<  HL[1]-HL[0]+1 << endl ;
	}
	
return 0;
}