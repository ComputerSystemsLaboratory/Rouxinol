#include <iostream>
using namespace std;

int main(){
	int n, a, b, c;
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> a >> b >> c;
		if( b > a ) swap( a, b );
		if( c > b ) {
			swap( b, c );
			if( b > a ) swap( a, b );
		}
		cout << (( a * a == b * b + c * c ) ? "YES\n" : "NO\n");
	}	
	return 0;
}