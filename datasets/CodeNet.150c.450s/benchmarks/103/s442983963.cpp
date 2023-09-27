#include <iostream>
using namespace std;

void doSum( int a, int b, int n, int s, int sum, int* count ){
	for ( int i = a; i < b; ++i ){
		int tsum = sum + i;
		if ( !n ){
			if ( tsum == s ) *count += 1;
		}else{
			doSum( i+1, b+1, n-1, s, tsum, count );
		}
	}
}

int main(){
	int n, s, count;

	while ( cin >> n >> s ){
		if ( !n && !s ) break;

		count = 0;
		doSum( 0, 10-n+1, n-1, s, 0, &count );

		cout << count << endl;
	}

	return 0;
}