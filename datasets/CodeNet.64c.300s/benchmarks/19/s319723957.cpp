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
	while (cin >> n && n != 0) {
		int ret = -INF;
		int a[5000];
		int memo[5000];
		for (int i = 0; i < n; ++i) cin >> a[i], memo[i] = -INF;
		for (int i = 0; i < n; ++i) {
			memo[i] = max(memo[i], a[i]);
			for (int j = i+1; j < n; ++j) {
				memo[j] = max(memo[j], memo[j-1] + a[j]);
			}
		}
		for (int i = 0; i < n; ++i) ret = max(ret, memo[i]);
		cout << ret << endl;
	}
	return 0;
}