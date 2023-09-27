#define _USE_MATH_DEFINES
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<list>
#include<stack>
#include<queue>
#include<cctype>
#include<iomanip>
#include<functional>
using namespace std;
typedef long long llong;
class Point {
public:
	double x, y;
};
int main() {
	int n; cin >> n;
	while (n--) {
		Point a, b, c, d;
		cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;
		b.x -= a.x; a.x = 0;
		b.y -= a.y; a.y = 0;
		d.x -= c.x; c.x = 0;
		d.y -= c.y; c.y = 0;
		double z = b.x*d.y - b.y*d.x;
		if (fabs(z)<1e-10)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}