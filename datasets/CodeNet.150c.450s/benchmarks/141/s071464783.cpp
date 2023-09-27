#include <iostream>
#include <complex>
#include <cmath>
#include <vector>
#include <cstdio>
using namespace std;
typedef complex<double> xy_t;

double crossPro(xy_t a, xy_t b)
{
	return (conj(a) * b).imag();
}

int main()
{
	double x[4],y[4];
	while(1)
	{
		for (int i = 0; i < 4; ++i)
		{
			cin >> x[i] >> y[i];
		}

		if (!cin) break;

		xy_t a(x[0],y[0]),b(x[1],y[1]),c(x[2],y[2]),p(x[3],y[3]);
		double s1 = crossPro(a-p,b-p);
		double s2 = crossPro(b-p,c-p);
		double s3 = crossPro(c-p,a-p);
		bool ok = false;
		if (((s1>0)&&(s2>0)&&(s3>0))||((s1<0)&&(s2<0)&&(s3<0)))
		{
			ok = true;
		}

		if (ok)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
