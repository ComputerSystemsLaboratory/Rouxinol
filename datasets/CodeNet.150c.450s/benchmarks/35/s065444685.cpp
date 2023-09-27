#include <iostream>
using namespace std;

int main(){
	int n;
	while ( cin >> n ){
		if ( !n ) break;
		int* a = new int[ n ];
		for ( int i = 0; i < n; ++i ){
			cin >> a[ i ];
		}
		int sum, max = a[ 0 ];
		for ( int i = 0; i < n; ++i ){
			sum = 0;
			for ( int j = i; j < n; ++j ){
			sum += a[ j ];
			if ( sum > max ) max = sum;
			}
		}
		cout << max << endl;
		delete[] a;
	}

	return 0;
}