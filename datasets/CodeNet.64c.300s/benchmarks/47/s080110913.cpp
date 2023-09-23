#define _USE_MATH_DEFINES
#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <string>
#include <stack>
#include <cctype>
#include <cstdlib>
#include <map>
using namespace std;

#define INF (1 << 20)
#define EPS (1e-10)
#define EQ(a,b) (fabs((a)-(b)) < EPS)

int main(){
	int cnt[100] = {};
	int n;
	while (cin >> n) ++cnt[n];
	int M = 0;
	for (int i = 0; i < 100; ++i) M = max(M, cnt[i]);
	for (int i = 0; i < 100; ++i) if (cnt[i] == M) cout << i << endl;
	return 0;
}