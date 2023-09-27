#include<iostream>
using namespace std;

int gaiseki(double,double,double,double,double,double);

int main() {
	double x[4],y[4];
	int n[3],ans;
	while ( cin >> x[0] ) {
		cin >> y[0];
		for ( int i = 1; i < 4; i++ ) {
			cin >> x[i] >> y[i];
		}
		//三角形の各辺の外積(求めたい点と始点、求めたい点と終点との外積)を取り、全て右か左だったら中に含まれる
		for ( int i = 0; i < 2; i++ ) 
			n[i] = gaiseki(x[i],y[i],x[i + 1],y[i + 1],x[3],y[3]);
		n[2] = gaiseki(x[2],y[2],x[0],y[0],x[3],y[3]);
		
		ans = 0;
		for ( int i = 0; i < 3; i++ ){
			ans += n[i];
		}
		
		if ( ans == 3 || ans == 0 )
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

int gaiseki(double x1,double y1,double x2,double y2,double xp,double yp) {
	double ans;
	ans =  xp * ( y1 - y2 ) + x1 * ( y2 - yp ) + x2 * ( yp - y1 );
	if ( ans > 0 ) return 1; //右側
	else return 0; //左側(＝だと線上だが、今回は考えなくて良い)
}