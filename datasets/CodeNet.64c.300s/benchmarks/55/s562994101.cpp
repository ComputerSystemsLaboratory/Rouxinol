#include <iostream>
using namespace std ;
int main () {
	int i = 1, x ;
	cin >> x ;
    while ( x != 0 ) {
    	cout << "Case" << " " << i << ":" << " " << x << endl ; 
    	i = i+1 ;
		cin >> x ;
	}
    return 0;
}
