#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

#define EPS 1e-5

struct point{
	double x;
	double y;
};
struct line{
	double a; // 傾き
	double b; // 切片
};

int recog_point_place( const point& a , const point&b , const point& c );
bool get_line( const point& a , const point& b , line *a_b );

int main(void)
{
	point a, b, c, p;
	int input;

	while(1)
	{
		cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> p.x >> p.y;
		if( cin.eof() ) break;

		int result_ab_c = recog_point_place( a , b , c );
		int result_ab_p = recog_point_place( a , b , p );
		int result_bc_a = recog_point_place( b , c , a );
		int result_bc_p = recog_point_place( b , c , p );
		int result_ca_b = recog_point_place( c , a , b );
		int result_ca_p = recog_point_place( c , a , p );

		if( result_ab_c == result_ab_p && result_bc_a == result_bc_p && result_ca_b == result_ca_p ) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}

int recog_point_place( const point& a , const point& b , const point& c )
{
	line a_b;

	bool result = get_line( a , b , &a_b );
	if( result == false )
	{
		if( (a.x + b.x)/2 < c.x ) return 1; // 点が直線より右にある場合に1をリターン
		else return 0;
	}
	else if( result == true )
	{
		if( c.y > a_b.a * c.x + a_b.b ) return 1; // 点が直線より上にある場合に1をリターン
		else return 0;
	}

}

bool get_line( const point& a , const point& b , line *a_b )
{
	if( fabs(a.x - b.x) < EPS )
	{
		return false;
	}
	else
	{
		a_b->a = (a.y - b.y) / (a.x - b.x);
		a_b->b = a.y - a_b->a * a.x;

		return true;
	}
}