#include <iostream>
using namespace std;

int main()
{
	int x , y ;
	for ( int i = 1;; i++ )
	{
		cin >> x >> y;
		if ( x > y )
		swap ( x , y );
	if ( x == 0 && y == 0 ) break;
	cout << x << " " << y << endl; 
	}
}