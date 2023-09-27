#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int n;
	cin >> n;
	string buf;
	for( int i = 0; i < n; i++ ) {
		cin >> buf;
		if( buf == "replace" ) {
			int a, b;
			string ptn;
			cin >> a >> b >> ptn;
			str.replace( a, b - a + 1, ptn );
		}
		if( buf == "reverse" ) {
			int a, b;
			cin >> a >> b;
			auto itr = str.begin();
			reverse( itr + a, itr + b + 1 );
		}
		if( buf == "print" ) {
			int a, b;
			cin >> a >> b;
			cout << str.substr( a, b - a + 1 ) << endl;
		}
	}
	return 0;
}