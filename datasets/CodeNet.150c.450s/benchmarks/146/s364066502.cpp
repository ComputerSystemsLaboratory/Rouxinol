#include<iostream>

using namespace std;

bool get_line( double , double , double , double , double& );

int main(void)
{
	double x1, x2, x3, x4;
	double y1, y2, y3, y4;

	double a1, a2;

	bool result1 , result2;

	int num;

	cin >> num;

	for( int i = 0 ; i < num ; i++ )
	{
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

		result1 = get_line( x1 , x2 , y1 , y2 , a1 );
		result2 = get_line( x3 , x4 , y3 , y4 , a2 );

		if( result1 == false && result2 == false )
		{
			cout << "YES" << endl;
		}
		else
		{
			if( a1 - a2 >= -1e-10 && a1 - a2 <= 1e-10 ) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}

	return 0;
}

bool get_line( double x1 , double x2 , double y1 , double y2 , double& a )
{
	if( x1 - x2 >= -1e-10 && x1 - x2 <= 1e-10 )
	{
		return false;
	}
	else
	{
		a = ( y1 - y2 ) / ( x1 - x2 );

		return true;
	}
}