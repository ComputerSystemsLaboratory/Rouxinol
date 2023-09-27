#include <iostream>
#include <cmath>
using namespace std;
double EPS=1e-10;
double add(double a, double b)
{
	if(abs(a+b)<EPS*(abs(a)+abs(b))) return 0;
	return a+b;
}

int main()
{
	int n; cin >> n ;
	double x[4],y[4];
	while(n--)
	{
		for(int i=0;i<4;i++) cin >> x[i] >> y[i] ;
		double vx[2],vy[2];
		for(int i=0;i<2;i++) vx[i]=add(x[2*i+1],-x[2*i]), vy[i]=add(y[2*i+1],-y[2*i]);
		if(!add(vx[0]*vy[1],-vy[0]*vx[1])) cout << "YES" << '\n' ;
		else cout << "NO" << '\n' ;
	}
}