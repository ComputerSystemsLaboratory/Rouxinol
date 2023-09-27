#include <iostream>
using namespace std;
double x[4],y[4],px,py,ax,ay,bx,by;
int main()
{
	while(true)
	{
		for(int i = 1;i<=3;i++){cin >> x[i];cin >> y[i];}
		if(cin.eof()){break;}
		cin >> px;
		cin >> py;
		double m,n;
		ax = x[2]-x[1];
		ay = y[2]-y[1];
		bx = x[3]-x[1];
		by = y[3]-y[1];
		px = px - x[1];
		py = py - y[1];
		double det = ax*by-ay*bx;
		m = (by*px-bx*py)/det;
		n = (-ay*px+ax*py)/det;
		if( det ==0) cout << "NO"<<endl;
		if(m>0 && m <= 1 && n > 0 && n <= 1 && m+n <= 1 ) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}