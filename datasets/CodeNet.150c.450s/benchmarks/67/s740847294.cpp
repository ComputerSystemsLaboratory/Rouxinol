#include<iostream>
using namespace std ;

int n;
int ans ;

void f(){
	ans = 0 ;
	for( int i=1 ; i<n ; i++ ){
		for( int j=i+1 ; j<n ; j++ ){
			int m = (j-i+1) * (i+j) / 2 ;
			if( m > n ) break ;
			if( m == n ) ans++ ;
		}
	}
}

int main(){
	
	while( cin >> n , n ){
		f() ;
		cout << ans << endl ;
	}
	
return 0;
}