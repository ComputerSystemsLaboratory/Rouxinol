#include<iostream>
#include<algorithm>
using namespace std ;

int D[181] = {} ; // 10^6 越え → 181
int dp_map[2][1000002] = {} ;

void t(){
	for( int i=1 ; i<181 ; i++ ){
		D[i] = i * (i+1) * (i+2) / 6 ;
	}
}

void dp(){
	
	for( int i=0 ; i<=1000000 ; i++ ){
		dp_map[0][i] = i ;
		dp_map[1][i] = i ;
	}
	
	for( int i=0 ; i<=1000000 ; i++ ){
		for( int j=1 ; j<181 ; j++ ){
			if( i+D[j] <= 1000000 )
				dp_map[0][i+D[j]] = min( dp_map[0][i+D[j]] , dp_map[0][i]+1 ) ;
			if( D[j]%2 == 1 && i+D[j] <= 1000000 )
				dp_map[1][i+D[j]] = min( dp_map[1][i+D[j]] , dp_map[1][i]+1 ) ;
		}
	}
}

int main(){
	
	t() ;
	dp() ;
	
	int n ;
	
	while( cin >> n , n ){
		cout << dp_map[0][n] << ' ' ;
		cout << dp_map[1][n] << endl ;
	}
	
return 0 ;
}