#include <iostream>
#include <complex>
using namespace std;

int main()
{
	const double EPS = 1e-10;
	const double PI = 4.*atan(1.);

	int n;cin>>n;
	for ( int i=0; i<n; i++ )
	{
		double x1,y1,x2,y2,x3,y3,x4,y4;
		cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		complex<double> A(x1,y1),B(x2,y2),C(x3,y3),D(x4,y4);
		double a = arg((A-B)/(C-D));
		//cout << ( abs(a)<EPS || abs(a)>PI-EPS ? "YES" : "NO" ) << endl;
		cout << ( abs(a)==0 || abs(a)==PI ? "YES" : "NO" ) << endl;
	}
	return 0;
}