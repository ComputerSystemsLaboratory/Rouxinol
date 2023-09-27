#include <iostream>
using namespace std ;
int main () { 
	int a, b ;
	cin >> a >> b ;
	while (( a > 0 )||( b > 0 )) {
		if ( a < b ) {
			cout << a << " " << b << endl ;
		} else if ( b < a ) { 
	  		cout << b << " " << a << endl ;
    	} else {
    		cout << a << " " << b << endl ;
		}cin >> a >> b ;
	    
	}
}
