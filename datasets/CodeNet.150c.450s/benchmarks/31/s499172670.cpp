#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
	long n, r, k, d = LONG_MIN, max_r = LONG_MIN, min_r, i;
	cin >> n >> min_r;
	for(i = 1; i < n; ++i){
		cin >> r;
		k = r - min_r;
		if( k > d )
			d = k;
		if( r < min_r ) {
			min_r = r;			
		}
	}
	
	cout << d << "\n";

	return 0;
}