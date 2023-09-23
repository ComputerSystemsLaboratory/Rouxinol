#include<iostream>
#include<algorithm>
using namespace std ;

int r , c ;
int d[10][10000] = {} ;
int b[11] = { 1,2,4,8,16,32,64,128,256,512,1024 } ;


int main(){
	
	while(1){
		cin >> r >> c ;
		if( r==0 && c==0 ) break ;
		
		for( int i=0 ; i<r ; i++ ){
			for( int j=0 ;  j<c ; j++ ){
				cin >> d[i][j] ;
			}
		}
		
		int ans = 0 ;
		
		for( int i=0 ; i<b[r] ; i++ ){
			int D[10000] = {0} ;
			
			for( int j=0 ; j<r ; j++ ){
				for( int k=0 ; k<c ; k++ ){
					if( (i & b[j]) == 0 && d[j][k] == 0 ||
						( (i & b[j])  && d[j][k] ) ) D[k]++;
				}
			}
			
			int tmp = 0 ;
			
			for( int j=0 ; j<c ; j++ ){
				tmp += max( D[j] , r-D[j] ) ;
			}
			
			ans = max( ans ,tmp ) ;
		}
		
		cout << ans << endl ;
	
	}
	
return 0 ; 
}