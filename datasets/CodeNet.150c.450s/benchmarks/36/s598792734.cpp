#include <iostream>
using namespace std;

int main(){
	int d;

	while ( cin >> d ){
		int n = 600 / d;
		long s = 0;
		for ( int i = 0 ; i < n; ++i ){
			s += d * ( d * i ) * ( d * i );
		}
		cout << s << endl;
	}

	return 0;
}