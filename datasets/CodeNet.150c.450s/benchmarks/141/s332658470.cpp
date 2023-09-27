#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <string>
#include <algorithm>
#include <string>
#include <climits>
#include <iomanip>
#include <utility>

#define REP(i, n) for (int (i) = 0; (i) < (int)(n); (i)++)
#define REG(i, a, b) for (int (i) = ((int)(a)); (i) < ((int)(b)); i++)
#define ALL(V) (V).begin(), (V).end()
#define PRINT(STR) cout << (STR) << endl
#define DEBUG(X) cerr << X << " (" << __LINE__ << ", " << __func__ << " )" << endl;

typedef long long ll;
using namespace std;

int main() {
	cin.tie(0); //?????±?????????????????????
	ios::sync_with_stdio(false); //printf??¨??±??????????????????

	double x1, y1, x2, y2, x3, y3, xp, yp;
	while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp) != EOF) {
		double tx1 = x2 - x1;
		double tx2 = x3 - x1;
		double ty1 = y2 - y1;
		double ty2 = y3 - y1;
		
		double S1 = fabs((tx1 * ty2) - (tx2 * ty1));
		x1 -= xp;	x2 -= xp;	x3 -= xp;
		y1 -= yp;	y2 -= yp;	y3 -= yp;
		double S2 = fabs((x1 * y2) - (x2 * y1)) + fabs((x2 * y3) - (x3 * y2)) + fabs((x3 * y1) - (x1 * y3));
		if (S1 < S2) {
			PRINT("NO");
		} else {
			PRINT("YES");
		}
	}

	return 0;
}