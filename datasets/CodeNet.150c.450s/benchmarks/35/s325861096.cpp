
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

	int n, num;
	vector< int > a;

	while( 1 ) {
	
		cin >> n;
		if( n == 0 ) break;

		int Max = -100001;

		a.push_back( 0 );

		for( int i = 0; i < n; i++ ) {

			cin >> num;
			a.push_back( num );

		}

		for( int i = 1; i <= n; i++ ) {

			a[i] = max( a[i], a[i] + a[i - 1] );
			Max  = max( Max, a[i] );
		
		}

		cout << Max << endl;

		a.clear();
	
	}

	return 0;

}