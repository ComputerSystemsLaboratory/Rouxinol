#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
double EPS=1e-10;
double add(double a, double b)
{
	if(abs(a+b)<EPS*(abs(a)+abs(b))) return 0;
	return a+b;
}
double x[3],y[3],X,Y;
bool input()
{
	for(int i=0;i<3;i++) cin >> x[i] >> y[i] ;
	if(cin.eof()) return false;
	cin >> X >> Y ;
	return true;
}
int main()
{
	while(input())
	{
		bool failed=false;
		for(int i=0;i<3;i++)
		{
			double dx=x[i]-X, dy=y[i]-Y;
			int cnt=0;
			double ext[2];
			for(int j=0;j<3;j++)
			{
				if(i==j) continue;
				double vx=x[j]-x[i],vy=y[j]-y[i];
				ext[cnt++]=add(dx*vy,-dy*vx);
			}
			if(ext[0]*ext[1]>=0) failed=true;
		}
		if(failed) cout << "NO" << '\n' ;
		else cout << "YES" << '\n' ;
	}
}