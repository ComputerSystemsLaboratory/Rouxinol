#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <list>
#include <iostream>
#include <sstream>
#include <climits>
#include <cfloat>
#include <complex>

using namespace std;


int main()
{
	int t[31 + 3];
	t[0] = t[1] = 0;
	t[2] = 1;
	for (int i = 3; i < 31 + 3; ++i)
		t[i] = t[i-1] + t[i-2] + t[i-3];

	int n;
	while (scanf("%d", &n), n)
		printf("%d\n", (t[n+2]/10+365) / 365);

	return 0;
}