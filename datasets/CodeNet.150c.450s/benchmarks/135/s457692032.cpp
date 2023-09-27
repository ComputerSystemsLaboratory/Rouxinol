#include<iostream>
#include<algorithm>
using namespace std ;

int X[1500001] = {} , Y[1500001] = {} ;

int main(){
	
	int w,h ;
	
	while( cin >> h >> w ){
		if( w==0 && h==0 ) break ;
		
		int ans = 0 ;
		int x[1501] = {} , y[1501] = {} ;
		for( int i=0 ; i<h ; i++ ) cin >> y[i] ;
		for( int i=0 ; i<w ; i++ ) cin >> x[i] ;
		
		for( int i=0 ; i<1500001 ; i++ ){
			X[i] = 0 ;
			Y[i] = 0 ;
		}
		
		for( int i=0 ; i<w ; i++ ){
			int sum = 0 ;
			for( int j=i ; j<w ; j++ ){
				sum += x[j] ;
				X[sum]++ ;
			}
		}
		for( int i=0 ; i<h ; i++ ){
			int sum = 0 ;
			for( int j=i ; j<h ; j++ ){
				sum += y[j] ;
				Y[sum]++ ;
			}
		}
		
		for( int i=0 ; i<1500001 ; i++ ){
			ans += X[i] * Y[i] ;
		}
		
		cout << ans << endl ;
	}
	
return 0;
}