#include <iostream>
using namespace std;

int min(int a, int b){
	if( a <= b ) return a;
	else return b;
}

int main(void){
	int w, h, x, y, r;
	int d_edge;
	cin >> w >> h >> x >> y >> r;
	if( x < 0 || w < x || y < 0 || h < y ) cout << "No" << endl;
	else{
		d_edge = min( min(x, w-x), min(y, h-y) );
		if( d_edge < r ) cout << "No" << endl;
		else cout << "Yes" << endl;
	}

	return 0;
}