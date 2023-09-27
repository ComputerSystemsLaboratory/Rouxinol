
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <unordered_set>
#include <unordered_map>
using namespace std;

const int MAX_N = 1e6; 
vector<int>dp1, dp2;
vector<int>tetra;

int main(void)
{
	int n = 1;
	do
	{
		tetra.push_back(n * (n + 1) * (n + 2) / 6);
		++n;
	} while (tetra.back() <= MAX_N);
	dp1.push_back(0);
	dp2.push_back(0);
	for (int i = 1; i <= MAX_N; ++i)
	{
		int a1 = INT_MAX, a2 = INT_MAX;
		for (int t : tetra)
		{
			if (t > i)break;
			a1 = min(a1, dp1[i - t] + 1);
			if (t % 2)
			{
				a2 = min(a2, dp2[i - t] + 1);
			}
		}
		dp1.push_back(a1);
		dp2.push_back(a2);
	}
	int x;
	while (cin >> x, x)
	{
		cout << dp1[x] << " " << dp2[x] << endl;
	}
	return 0;
}