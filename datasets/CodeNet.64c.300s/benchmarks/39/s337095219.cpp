#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, n, iCount;

	while( cin >> n ){
		iCount = 0;

		for( a=0;a<=9;a++ ){
			for( b=0;b<=9;b++ ){
				for( c=0;c<=9;c++ ){
					for( d=0;d<=9;d++ ){
						if( (a+b+c+d) == n )
							iCount++;
					}
				}
			}
		}

		cout << iCount << endl;

	}

	return 0;
}