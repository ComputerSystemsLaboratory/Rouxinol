/*
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0007
 */
#include <iostream>
#include <cmath>

using namespace	std;

#define INITIAL 100000
#define INTEREST 1.05
#define CEILING 1000

int
dow(int a, float r, int w)
{
	if (w == 0)
		return a;
	float c = a / CEILING;
	return dow(ceil(c * r) * CEILING, r, --w);
}

int
main()
{
	int w;
	cin >> w;
	cout << dow(INITIAL, INTEREST, w) << endl;
	return 0;
}