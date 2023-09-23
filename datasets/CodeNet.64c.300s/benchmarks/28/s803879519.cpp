#include<iostream>
using namespace std;

int main(){
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;
	
	if( x-r < 0 ) cout << "No" << endl;
	else if( y-r < 0 ) cout << "No" << endl;
	else if( x+r > H ) cout << "No" << endl;
	else if( y+r > H ) cout << "No" << endl;
	else cout << "Yes" << endl;

	return 0;
}