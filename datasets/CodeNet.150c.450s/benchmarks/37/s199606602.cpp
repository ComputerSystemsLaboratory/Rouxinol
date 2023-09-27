#include <iostream>
#include <vector>
#include<iomanip>
using namespace std;

struct xy
{
	double x;
	double y;
};
int main()
{
	double a, b, c, d, e, f,x,y;
	vector<xy> dst;
	while (cin>> a >> b >> c >> d >> e >> f) {
		y = (f - d / a * c) / (e - d / a * b);
		x = (c - b * y) / a;
		dst.push_back({ x,y });
	}
	for (vector<xy>::iterator it = dst.begin(); it < dst.end(); it++) {
		cout.setf(ios::fixed);
		cout << fixed << setprecision(3) << (*it).x<<" "<<(*it).y << endl;
	}
	return 0;
}
