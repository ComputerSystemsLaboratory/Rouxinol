#include <iostream>
#include <complex>
#include <cmath>
#include <vector>
#include <cstdio>
using namespace std;
typedef long long ll;
typedef complex<long long> xy_t;

double crossPro(xy_t a, xy_t b)
{
	return (conj(a) * b).imag();
}

int main()
{
	int N;
	double x[4],y[4];
	ll X[4],Y[4];
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];
		for (int j = 0; j < 4; ++j)
		{
			X[j] = round(x[j] * 1e5);
			Y[j] = round(y[j] * 1e5);
			//cout << X[j] << " " << Y[j] << endl;
		}
		xy_t t1(X[0],Y[0]);
		xy_t t2(X[1],Y[1]);
		xy_t t3(X[2],Y[2]);
		xy_t t4(X[3],Y[3]);

		if (crossPro(t2-t1,t4-t3) == 0)
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
