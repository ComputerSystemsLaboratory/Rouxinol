#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <iostream>

using namespace std;
#define VARIABLE(x) cerr << #x << "=" << x << endl
#define BINARY(x) static_cast<bitset<16> >(x);
#define if_range(x, w, h) if (w <= x && x <= h)
#define BitCheck(a,b)   (a >> b) & 1
#define BitSet(a,b)       a |= (1 << b)
#define BitunSet(a,b)    a &= ~(1 << b)
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#define Numof(array)  (sizeof (array) / sizeof *(array))

struct cmp_c {
	bool operator()(int x, int y) {
		return x < y;
	}
} cmp;

int main() {
	int n, a[1000000], dp[1000001];
	scanf("%d", &n);
	fill(dp, &dp[n], INT_MAX);
	for (int i = 0; n > i; i++)
		scanf("%d", &a[i]);

	for (int i = 0; n > i; i++) {
		*lower_bound(dp, &dp[n], a[i]) = a[i];
	}
	printf("%d\n", lower_bound(dp, &dp[n], INT_MAX) - dp);
	return 0;
}