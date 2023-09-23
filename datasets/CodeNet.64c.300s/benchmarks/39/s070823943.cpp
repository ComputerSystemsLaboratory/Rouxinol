#include<iostream>
using namespace std ;

int main(){
	
	int n ;
	
	while( cin >> n ){
		if( cin.eof() ) break ;
		
		int ans = 0 ;
		for( int a = 0 ; a < 10 ; a++ ){
			if( a > n ) break ;
			for( int b = 0 ; b < 10 ; b++ ){
				if( a+b > n ) break ;
				for( int c = 0 ; c < 10 ; c++ ){
					if( a+b+c > n ) break ;
					for( int d = 0 ; d < 10 ; d++ ){
						if( a+b+c+d > n ) break ;
						if( a+b+c+d == n ) ans++ ;
					}
				}
			}
		}
		
		cout << ans << endl;
	}
	
	
	
return 0 ;
}