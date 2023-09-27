#include <iostream>
#include <string>
using namespace std;

int main()
{
	string buf;

	while( true ) {
		cin >> buf;
		if( buf == "-" ) {
			break;
		}

		int m = 0;
		cin >> m;
		
		int n = 0;
		for( int i = 0; i < m; i++ ) {
			cin >> n;
			buf = buf.substr( n ) + buf.substr( 0, n );
		}
		cout << buf << endl;
	}

	return 0;
}