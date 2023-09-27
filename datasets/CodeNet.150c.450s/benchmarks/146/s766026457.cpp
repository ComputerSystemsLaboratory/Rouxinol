#include <iostream>
using namespace std;

class Vector2{
public:
	Vector2() : x( 0.0 ), y( 0.0 ){}
	Vector2( double aX, double aY ) : x( aX ), y( aY ){}

	double cross( Vector2& v ){
		return ( x * v.y ) - ( y * v.x );
	}

	void operator-=( Vector2& v ){
		x -= v.x;
		y -= v.y;
	}

	double x, y;
};

int main(){
	int n;

	cin >> n;
	Vector2* a = new Vector2[ n ];
	Vector2* b = new Vector2[ n ];
	Vector2* c = new Vector2[ n ];
	Vector2* d = new Vector2[ n ];

	for ( int i = 0; i < n; ++i ){
		cin >> a[ i ].x >> a[ i ].y >> b[ i ].x >> b[ i ].y >> c[ i ].x >> c[ i ].y >> d[ i ].x >> d[ i ].y;
	}

	for ( int i = 0; i < n; ++i ){
		a[ i ] -= b[ i ];
		c[ i ] -= d[ i ];
		cout << ( !a[ i ].cross( c[ i ] ) ? "YES" : "NO" ) << endl;
	}

	delete[] a;
	delete[] b;
	delete[] c;
	delete[] d;

	return 0;
}