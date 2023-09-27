#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <iostream>


using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		double x[4], y[4];
		for (int j = 0; j < 4; ++j)
			scanf("%lf %lf", x+j, y+j);

		double dx1 = x[1] - x[0];
		double dy1 = y[1] - y[0];
		double dx2 = x[3] - x[2];
		double dy2 = y[3] - y[2];
		if (dy1/dx1 == dy2/dx2)
			puts("YES");
		else
			puts("NO");
	}

	return 0;
}