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
using namespace std;

#define Getsign(n) ((n > 0) - (n < 0))

typedef vector<int> Ivec;
typedef pair<int, int> Pos;

int main() {
	int n,m,p;
	
	while (scanf("%d %d %d", &n, &m, &p)) {
		if (!n)
			return 0;

		int hitter = 0, sum = 0;
		for (int i = 0; n > i; i++) {
			int a;
			scanf("%d", &a);
			if (i + 1 == m) hitter = a;
			sum += 100 * a;
		}
		if (!hitter)printf("0\n");
		else printf("%d\n", (int)(sum/100*(100-p) / hitter));
	}




	return 0;
}