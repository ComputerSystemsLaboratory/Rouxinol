#include <iostream>
using namespace std;

int main() {
	
	int n , m[12] = {} ;
	
	while( cin >> n ){
		if( cin.eof() ) break ;
		if( n==0 ){
			for( int i=11 ; i>=0 ; i-- ){
				if( m[i] != 0 ){
					cout << m[i] << endl ;
					m[i] = 0 ;
					break ;
				}
			}
		}
		else {
			for( int i=0 ; i<12 ; i++ ){
				if( m[i] == 0 ){
					m[i] = n ;
					break ;
				}
			}
		}
	}
	
	return 0;
}