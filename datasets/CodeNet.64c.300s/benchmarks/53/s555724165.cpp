#include <iostream>
using namespace std ;
int main () { 
	int a, b, c, count ; 
	cin >> a >> b >> c ;
	count = 0 ;
	for ( int i = 0 ; a <= b ; a = a+1 ) {
		if ( 0 == c % a ) { 
			count = count + 1  ;
	    } 
	} cout << count << endl ;
}
