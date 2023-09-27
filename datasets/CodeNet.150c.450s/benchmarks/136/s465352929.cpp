#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
#include <math.h>
#include <limits>

using namespace std;

typedef unsigned long long ullong;

class cgl
{
public:
	ullong gcd(ullong, ullong);
	ullong lcm(ullong, ullong, ullong);
};

ullong cgl::gcd(ullong a, ullong b)
{
	if (a % b == 0)
		return b;
	return gcd(b, a % b);
}

ullong cgl::lcm(ullong a, ullong b, ullong g)
{
	return a * b / g;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	cgl cg;
	ullong a, b, g;

	for (;;)
	{
		cin >> a >> b;
		if (cin.fail()) break;
		g = cg.gcd(a, b);
		cout << g << " " << cg.lcm(a, b, g) << endl;
	}

	return 0;
}