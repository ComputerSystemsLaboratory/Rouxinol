#include <bits/stdc++.h>
using namespace std;
typedef complex<double> xy_t;
xy_t a, b, c, p;
double x1, x2, x3, xp, y_1, y2, y3, yp;
double s1, s2, s3;
int main()
{
	while(cin >> x1 >> y_1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp)
	{
		a=xy_t(x1, y_1);
		b=xy_t(x2, y2);
		c=xy_t(x3, y3);
		p=xy_t(xp, yp);
		s1=(conj(a-p)*(b-p)).imag();
		s2=(conj(b-p)*(c-p)).imag();
		s3=(conj(c-p)*(a-p)).imag();
		if(((s1>0)&&(s2>0)&&(s3>0))||((s1<0)&&(s2<0)&&(s3<0)))
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