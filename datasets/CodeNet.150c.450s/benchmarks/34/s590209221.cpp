#include <iostream>
using namespace std;

int main()
{
	int n, cnt, y;
	int c[31];

	c[0] = 1;
	c[1] = 1;
	c[2] = 2;
	for( int i=3; i<=30; i++ )
		c[i] = c[i-1] + c[i-2] + c[i-3];

	while( cin >> n, n != 0 ){
		y = c[n]/(365*10);
		y += !( c[n]%(365*10) == 0 );
		cout << y << endl;
	}

	return 0;
}