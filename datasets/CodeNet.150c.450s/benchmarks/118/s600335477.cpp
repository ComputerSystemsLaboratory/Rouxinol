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
	int n;

	scanf("%d", &n);

	int y, m, d;
	for (int i = 0; n > i; i++) {
		scanf("%d %d %d", &y, &m, &d);
		int sum = (y-1)*195 + (y-1)/3*5+ d-1;
		if (!(y % 3))
			sum += (m - 1) * 20;
		else
			sum += (m - 1) * 20 - (int)((m - 1)/2);
		printf("%d\n", 196470-sum);
	}


	return 0;
}