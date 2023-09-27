#include <iostream>
#include <complex>
using namespace std;

int main()
{
	double x1,y1,x2,y2,x3,y3,xp,yp;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp)
	{
		complex<double> p1(x1,y1),p2(x2,y2),p3(x3,y3),pp(xp,yp);
		if ( arg((p3-p1)/(p2-p1))*arg((pp-p1)/(p2-p1))>0 &&
			 arg((p1-p2)/(p3-p2))*arg((pp-p2)/(p3-p2))>0 &&
			 arg((p2-p3)/(p1-p3))*arg((pp-p3)/(p1-p3))>0 )
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
			 
	}

	return 0;
}