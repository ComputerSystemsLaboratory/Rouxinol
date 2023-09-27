#include<iostream>

using namespace std;

bool get_line( double , double , double , double , double& , double& );

int main(void)
{
	double x1, x2, x3, xp;
	double y1, y2, y3, yp;
	double a1, a2, a3, b1, b2, b3;
	bool result1 , result2 , result3;

	int flag1, flag2, flag3;
	int flag1p , flag2p , flag3p;

	while(1)
	{
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp;
		if( cin.eof() ) break;

		result1 = get_line( x1 , y1 , x2 , y2 , a1 , b1 );
		result2 = get_line( x2 , y2 , x3 , y3 , a2 , b2 );
		result3 = get_line( x3 , y3 , x1 , y1 , a3 , b3 );

		if( result1 == true )
		{
			if( y3 > a1 * x3 + b1 ) flag1 = 1;
			else flag1 = 0;
			if( yp > a1 * xp + b1 ) flag1p = 1;
			else flag1p = 0;
		}
		else
		{
			if( x3 > (x1+x2)/2 ) flag1 = 1;
			else flag1 = 0;
			if( xp > (x1+x2)/2 ) flag1p = 1;
			else flag1p = 0;
		}
		if( result2 == true )
		{
			if( y1 > a2 * x1 + b2 ) flag2 = 1;
			else flag2 = 0;
			if( yp > a2 * xp + b2 ) flag2p = 1;
			else flag2p = 0;

		}
		else
		{
			if( x1 > (x2+x3)/2 ) flag2 = 1;
			else flag2 = 0;
			if( xp > (x2+x3)/2 ) flag2p = 1;
			else flag2p = 0;
		}
		if( result3 == true )
		{
			if( y2 > a3 * x2 + b3 ) flag3 = 1;
			else flag3 = 0;
			if( yp > a3 * xp + b3 ) flag3p = 1;
			else flag3p = 0;
		}
		else
		{
			if( x2 > (x3+x1)/2 ) flag3 = 1;
			else flag3 = 0;
			if( xp > (x3+x1)/2 ) flag3p = 1;
			else flag3p = 0;
		}

		if( flag1 == flag1p && flag2 == flag2p && flag3 == flag3p ) cout << "YES" << endl;
		else cout << "NO" << endl;
	}


	return 0;
}

bool get_line( double x1 , double y1 , double x2 , double y2 , double& a , double& b )
{
	if( x1 - x2 >= -0.0001 && x1 - x2 <= 0.0001 )
	{
		return false;
	}
	else
	{
		a = ( y1 - y2 )/( x1 - x2 );
		b = y1 - a * x1;

		return true;
	}
}