#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

class cEquation
{
public:
	string calc(vector<double> &);
};

string cEquation::calc(vector<double> &v)
{
	double a = v[0];
	double b = v[1];
	double c = v[2];
	double d = v[3];
	double e = v[4];
	double f = v[5];
	double x = (c*e - b*f) / (a*e - b*d);
	if (x == -0) x = 0;
	double y = (a*f - c*d) / (a*e - b*d);
	if (y == -0) y = 0;
	ostringstream oss;
	oss << fixed << setprecision(3) << x << " " << y;

	return string(oss.str());
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	cEquation ct;
	vector<double> vd(6);

	for (;;)
	{
		cin >> vd[0] >> vd[1] >> vd[2] >> vd[3] >> vd[4] >> vd[5];
		if (cin.fail()) break;
		cout << ct.calc(vd) << endl;
	}

	return 0;
}