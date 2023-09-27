#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int x[4] = { 0,1,0,-1 }, y[4] = { -1,0,1,0 };
int main()
{
	int a;
	while (cin >> a, a) {
		int xmin, xmax, ymin, ymax; xmin = xmax = ymin = ymax = 0;
		int c[200]{}, d[200]{};
		for (int b = 0; b < a-1; b++) {
			int e, f; scanf("%d%d", &e, &f);
			int g = c[e] + x[f], h = d[e] + y[f];
			c[b + 1] = g; d[b + 1] = h;
			xmin = min(xmin, g);
			xmax = max(xmax, g);
			ymin = min(ymin, h);
			ymax = max(ymax, h);
		}
		cout << (ymax - ymin + 1) << " " << (xmax - xmin + 1) << endl;
	}
}