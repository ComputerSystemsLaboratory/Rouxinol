#include<iostream>
using namespace std ;

int main(){
	
	int n ;
	int y,m,d ;
	
	int p = 1 ;
	for( int i=1 ; i<1000 ; i++ ){
		if( i%3 == 0 ) p += 10*20 ;
		else p += 5*20 + 5*19 ;
	}
	
	cin >> n ;
	for( int i=0 ; i<n ; i++ ){
		cin >> y >> m >> d ;
		int c = d ;
		for( int j=1 ; j<y ; j++ ){
			if( j%3 == 0 ) c += 10 * 20 ;
			else c += 5*19 + 5*20 ;
		}
		for( int j=1 ; j<m ; j++ ){
			if( y%3 == 0 ) c += 20 ;
			else if( j%2 ) c += 20 ;
			else c += 19 ;
		}
		cout << p-c << endl ;
	}
	
return 0;
}