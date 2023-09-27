#define _USE_MATH_DEFINES
#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <stack>
#include <cctype>
#include <cstdlib>
using namespace std;

#define INF (1 << 20)
#define EPS (1e-10)
#define EQ(a,b) (fabs((a)-(b)) < EPS)

int main(){
	int n;
	cin >> n;
	for (int j = 0; j < n; ++j) {
		double x[4], y[4];
		for (int i = 0; i < 4; ++i) cin >>x[i] >> y[i];
		double xa = x[0] - x[1];
		double ya = y[0] - y[1];
		double xb = x[2] - x[3];
		double yb = y[2] - y[3];
		if (EQ(xa * yb, ya * xb)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}