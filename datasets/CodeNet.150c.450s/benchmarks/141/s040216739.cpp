#include <iostream>

using namespace std;

class Vector3{
public:
	double x,y;

	Vector3(){}
	Vector3( double dx, double dy ){
		x = dx;
		y = dy;
	}

	double operator*( Vector3 hoge ){
		return ( x * hoge.y - ( y * hoge.x ) );
	}

	void operator-=( Vector3 hoge ){
		x -= hoge.x;
		y -= hoge.y;
	}
};

double crossProduct( Vector3 a, Vector3 b, Vector3 p )
{
	b -= a;
	p -= a;

	return b * p;
}

int main(int argc, char const* argv[])
{
	Vector3 p[3];
	Vector3 point;
	double answer[3];

	while( cin >> p[0].x >> p[0].y >> p[1].x >> p[1].y >> p[2].x >> p[2].y >> point.x >> point.y ){
		answer[0] = crossProduct( p[0], p[1], point );
		answer[1] = crossProduct( p[1], p[2], point );
		answer[2] = crossProduct( p[2], p[0], point );
		if( ( ( answer[0] < 0 ) && (answer[1] < 0 ) && ( answer[2] < 0 ) ) || ( ( answer[0] > 0 ) && ( answer[1] > 0 ) && ( answer[2] > 0 ) ) )
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}