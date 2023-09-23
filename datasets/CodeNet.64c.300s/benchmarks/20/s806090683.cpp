#include <iostream>

using namespace std;

int f( int d ){
	return d * d;
}

int main(int argc, char const* argv[])
{
	int d;

	while( cin >> d ){
		int n = 600 / d;
		int sum = 0;

		for( int i = 1;i < n;i++ ){
			sum += f( i * d ) * d;
		}

		cout << sum << endl;
	}
	
	return 0;
}