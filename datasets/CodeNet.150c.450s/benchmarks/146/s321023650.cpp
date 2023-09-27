#include<iostream>
using namespace std;

int main(){

	int n;
	float ax,ay,bx,by,cx,cy,dx,dy;
	float Labx, Laby, Lcdx, Lcdy;
	float cross;

	cin >> n;

	for( int i=0;i<n;i++ ){
		cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;

		Labx = bx - ax;
		Laby = by - ay;
		Lcdx = dx - cx;
		Lcdy = dy - cy;

		cross = Labx * Lcdy - Laby * Lcdx;

		if( cross == 0.0 )
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
	return 0;
}