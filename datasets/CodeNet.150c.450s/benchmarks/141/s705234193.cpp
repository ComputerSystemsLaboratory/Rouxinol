#include <iostream>
#include <cmath>

using namespace std;
typedef pair<double, double> P;

double CalcTriSquare(P p1, P p2, P p3)
{
	double a, b, c;
	double s;
	a = sqrt((p2.first - p1.first) * (p2.first - p1.first) + (p2.second - p1.second) * (p2.second - p1.second));
	b = sqrt((p3.first - p1.first) * (p3.first - p1.first) + (p3.second - p1.second) * (p3.second - p1.second));
	c = sqrt((p3.first - p2.first) * (p3.first - p2.first) + (p3.second - p2.second) * (p3.second - p2.second));
	s = (a + b + c) / 2;
	return(sqrt(s * (s - a) * (s - b) * (s - c)));
}

void solve()
{
	P p[4];
	while(cin >> p[0].first >>p[0].second >> p[1].first >> p[1].second >> p[2].first >> p[2].second >> p[3].first >> p[3].second)
	{
		double sum = 0;
		sum += CalcTriSquare(p[0], p[1], p[3]);
		sum += CalcTriSquare(p[0], p[2], p[3]);
		sum += CalcTriSquare(p[1], p[2], p[3]);
		double square = CalcTriSquare(p[0], p[1], p[2]);
		if(fabs(sum - square) < 0.001)
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