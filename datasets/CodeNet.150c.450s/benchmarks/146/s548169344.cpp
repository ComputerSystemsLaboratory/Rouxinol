#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<list>
#include<queue>
#include<stack>
#include<deque>
using namespace std;

int main() {
	int a; cin >> a;
	for (int b = 0; b < a; b++) {
		double x1, y1, x2, y2, x3, y3, x4, y4;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		double x5 = x2 - x1, y5 = y2 - y1, x6 = x4 - x3, y6 = y4 - y3;
		if (x5 == 0 && x6 == 0 || y5 == 0 && y6 == 0) {
			puts("YES");
		}
		else if (x5 == 0 || x6 == 0 || y5 == 0 || y6 == 0) {
			puts("NO");
		}
		else {
			if (abs(x6 / y6 - x5 / y5) <= 0.0000001)puts("YES");
			else puts("NO");
		}
	}
}