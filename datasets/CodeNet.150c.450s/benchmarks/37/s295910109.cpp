#include <iostream>
#include <iomanip>
using namespace std;

void OutputSolution(double a, double b, double c, double d, double e, double f)
{
	double y = (a*f - c*d) / (a*e - b*d);
	double x = (c-b*y) / a;
//	if(x == -0) x = 0;
//	if(y == -0) y = 0;
	cout << fixed << setprecision(3) << x << ' ' << y << endl;
}

int main()
{
	while(true){
		double a, b, c, d, e, f;
		cin >> a >> b >> c >> d >> e >> f;
		if(cin.eof()) break;
		OutputSolution(a, b, c, d, e, f);
	}
	return 0;
}