#include <iostream>
using namespace std;

class Vector2{
public:
	Vector2(){}
	Vector2( double aX, double aY ) : x( aX ), y( aY ){}

	double cross( Vector2& a ){
		return ( x * a.y ) - ( y * a.x );
	}

	double x;
	double y;
};

int main(){
	Vector2 p0, p1, p2, q;

	while ( cin >> p0.x >> p0.y >> p1.x >> p1.y >> p2.x >> p2.y >> q.x >> q.y ){
		bool isInner = false;
		Vector2 ab( p1.x - p0.x, p1.y - p0.y );
		Vector2 bc( p2.x - p1.x, p2.y - p1.y );
		Vector2 ca( p0.x - p2.x, p0.y - p2.y );
		Vector2 ap( q.x - p0.x, q.y - p0.y );
		Vector2 bp( q.x - p1.x, q.y - p1.y );
		Vector2 cp( q.x - p2.x, q.y - p2.y );

		if( ( (ab.cross( ap ) > 0 ) && (bc.cross( bp ) > 0 ) && (ca.cross( cp ) > 0 ) ) ||
			( (ab.cross( ap ) < 0 ) && (bc.cross( bp ) < 0 ) && (ca.cross( cp ) < 0 ) ) ){
			isInner = true;
		}

		cout << ( isInner ? "YES" : "NO" ) << endl;
	}

	return 0;
}