#include <iostream>
#include <cmath>

using namespace std;
typedef pair<double, double> P;
static const double eps = 1.0e-9;

double Helon(P p1, P p2, P p3)
{
	double a, b, c;
	a = sqrt((p1.first - p2.first) * (p1.first - p2.first) + (p1.second - p2.second) * (p1.second - p2.second));
	b = sqrt((p2.first - p3.first) * (p2.first - p3.first) + (p2.second - p3.second) * (p2.second - p3.second));
	c = sqrt((p3.first - p1.first) * (p3.first - p1.first) + (p3.second - p1.second) * (p3.second - p1.second));
	double s = (a + b + c) / 2;
	return(sqrt(s * (s - a) * (s - b) * (s - c)));
}

void solve()
{
	P p[3];
	P pp;
	while(cin >> p[0].first)
	{
		cin >> p[0].second;
		for(int i = 1; i < 3; ++i)
		{
			cin >> p[i].first >> p[i].second;
		}
		cin >> pp.first >> pp.second;
		double sum1 = 0;
		sum1 = Helon(p[0], p[1], p[2]);
		double sum = 0;
		sum += Helon(p[0], p[1], pp);
		sum += Helon(p[1], p[2], pp);
		sum += Helon(p[2], p[0], pp);
		if(fabs(sum1 - sum) < eps)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}