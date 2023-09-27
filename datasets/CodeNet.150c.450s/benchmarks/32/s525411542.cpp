#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <cstring>
#include <numeric>
#include <algorithm>
#include <functional>
#include <array>
#include <map>
#include <queue>
#include <limits.h>
#include <set>
#include <stack>

using namespace std;

#define Getsign(n) ((n > 0) - (n < 0))
#define QWERTYR(c) (c == 'y' || c == 'u' || (c >= 'h' && c <= 'p') ?	true : false)
map<string, int> roma_time = { { "I",1 },{ "II",2 },{ "III",3 },{ "IIII",4 },{ "V",5 },{ "VI",6 },{ "VII",7 },{ "VIII",8 },{ "IX",9 },{ "X",10 },{ "XI",11 },{ "XII",12 } };

typedef vector<int> Ivec;
typedef pair<int, int> pii;

int main() {
	int n, Max, Min;
	while (scanf("%d %d %d", &n, &Min, &Max)) {
		if (n == 0)
			return 0;

		vector<int> points;

		for (int i = 0; n > i; i++) {
			int p;
			scanf("%d", &p);
			points.push_back(p);
		}
		int num, Maxim = -1;
		for (int i = Min-1; Max-1 >= i; i++) {
			if (points[i] - points[i + 1] >= Maxim) {
				num = i;
				Maxim = points[i] - points[i + 1];
			}
		}
		printf("%d\n", num + 1);
	}
	return 0;
}