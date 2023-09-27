#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	double x[3], y[3], p, q;
	while (cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>p>>q) {
		bool f[3];
		for (int i = 0; i < 3; i++) {
			if ((x[i % 3] - p)*(y[(i + 1) % 3] - q) - (y[i % 3] - q)*(x[(i + 1) % 3] - p) <= 0)f[i] = false;
			else f[i] = true;
		}
		if (f[0]==f[1]&&f[1]==f[2])puts("YES");
		else puts("NO");
	}
	return 0;
}