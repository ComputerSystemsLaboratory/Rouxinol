#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<string>
#include<cctype>
#include<vector>
#include<queue>
#include<map>
using namespace std;

int main() {
	double a, b, c, d, e, f, x, y, G;

	while (cin >> a >> b >> c >> d >> e >> f) {
		//a*d-b*c=0:?§£??????
		G = 1 / (a*e - b*d);
		x = G*(e*c + (-b)*f);
		y = G*((-d)*c + a*f);
		if (fabs(x) < 1e-3) x = 0;
		if (fabs(y) < 1e-3) y = 0;
		cout << fixed << setprecision(3) << x << " " << y << endl;
	}

	return 0;
}