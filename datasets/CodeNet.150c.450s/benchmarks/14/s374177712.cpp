#include <iostream>
using namespace std;

int main()
{

	int  n, x, i = 0;

	cin >> n;
	while( ++i <= n ) {

		x = i;
		if( x % 3 == 0 ) cout << " " << i;
		else if( x % 10 == 3 ) cout << " " << i;
		else {
			while( x / 10 > 0 ) {

				x /= 10;
				if( x % 10 == 3 ) { cout << " " << i; break; }

			}
		}

	}

	cout << endl;

	return 0;

}