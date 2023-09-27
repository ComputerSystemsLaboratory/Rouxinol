#include <iostream>
using namespace std;

class Vector2{
public:
	Vector2(){}
	Vector2( double aX, double aY ) : x( aX ), y( aY ){}

	double dot( Vector2& a ){
		return ( x * a.x ) + ( y * a.y );
	}

	double x;
	double y;
};


int main(){
	Vector2 p0, p1, p2, q;

	while ( cin >> p0.x >> p0.y >> p1.x >> p1.y >> p2.x >> p2.y >> q.x >> q.y ){
		bool isInner = false;
		Vector2 a( p1.x - p0.x, p1.y - p0.y );
		Vector2 b( p2.x - p0.x, p2.y - p0.y );
		Vector2 c( q.x - p0.x, q.y - p0.y );

		double aa = a.dot( a );
		double ab = a.dot( b );
		double ac = a.dot( c );
		double bb = b.dot( b );
		double bc = b.dot( c );

		double s = ( bc*ab - ac*bb ) / ( ab*ab - aa*bb );
		if ( ( s > 0.0 ) && ( s < 1.0 ) ){
			double t = ( ac*ab - bc*aa ) / ( ab*ab - aa*bb );
			if ( ( t > 0.0 ) && ( s + t < 1.0 ) ){
				isInner = true;
			}
		}

		cout << ( isInner ? "YES" : "NO" ) << endl;
	}


	return 0;
}