#include <iostream>
#include <vector>
using namespace std;

int main()
{

	int n, num;
	vector< long int > a;

	while( 1 ) {

		int Max = -1000001;

		cin >> n;
		if( n == 0 ) break;

		a.push_back( 0 );

		for( int i = 0; i < n; i++ ) {
		
			cin >> num;
			a.push_back( num );
			
		}

		//?????§???
		for( int i = 1; i <= n; i++ ) {
		
			a[i - 1] + a[i] > a[i] ? a[i] = a[i - 1] + a[i] : a[i] = a[i];

			if ( a[i] > Max ) {
				Max = a[i];
			}
		
		}

		cout << Max << endl;

		a.clear();
	
	}

	return 0;

}