#include <iostream>
using namespace std;
double x[4], y[4];
double f(int a, int b, int c)
{
	return ((y[c]-y[a])*(x[b]-x[a])-(y[b]-y[a])*(x[c]-x[a]));
}
int main()
{
	while (cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3])
	{
		if (f(0, 1, 2)*f(0, 1, 3) > 0 && f(1, 2, 0)*f(1, 2, 3) > 0 && f(2, 0, 1)*f(2, 0, 3) > 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}