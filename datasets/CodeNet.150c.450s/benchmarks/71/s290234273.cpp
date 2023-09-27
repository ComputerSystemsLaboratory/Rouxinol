#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
	int a,b,c,d,n;
	int succed;

	while( cin >> n ){
		succed = 0;
		for( a = 0;a <= 9;a++ ){
			for( b = 0;b <= 9;b++ ){
				for( c = 0;c <= 9;c++ ){
					for( d = 0;d <= 9;d++ ){
						if( a + b + c + d == n ) succed++;
					}
				}
			}
		}
		cout << succed << endl;
	}
	return 0;
}