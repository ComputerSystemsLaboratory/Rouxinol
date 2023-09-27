#include <bits/stdc++.h>
using namespace std;
typedef complex<double> xy_t; 
xy_t a[100], b[100], c[100], d[100];
double x, y;
int n;
int main()
{
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> x >> y;
		a[i]=xy_t(x, y);
		cin >> x >> y;
		b[i]=xy_t(x, y);
		cin >> x >> y;
		c[i]=xy_t(x, y);
		cin >> x >> y;
		d[i]=xy_t(x, y);
	}
	for(int i=0; i<n; i++)
	{
		if(abs((conj(b[i]-a[i])*(d[i]-c[i])).imag())<1e-10)
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