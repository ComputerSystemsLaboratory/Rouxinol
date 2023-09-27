#include <iostream>
#include <vector>
#include <ios>
#include <limits.h>
using namespace std;
int g_minCand = 0;

int GetMax(int a, int b) { return (a > b ? a : b); }

int partition(const vector<int>& vN, int m, int i, int p, int k)
{
	if (p == k - 1){
		int a = 0;
		for (int j = i; j < vN.size(); ++j)
			a += vN[j];		
		return GetMax(m, a);
	}

	int q, a = 0;
	for (q = i; q <= vN.size() - k + p + 1; ++q){
		if (a + vN[q] > g_minCand)
			break;
		a += vN[q];
	}

	int r = GetMax(m, a);
	return partition(vN, r, q, p + 1, k);
}

int main()
{
	ios::sync_with_stdio(false);
	int n, k, i;
	cin >> n >> k;
	vector<int> vN(n, 0);
	int s = 0;
	int maxV = INT_MIN;
	for (i = 0; i < n; ++i){
		cin >> vN[i];
		s += vN[i];
		if (vN[i] > maxV)
			maxV = vN[i];
	}
	g_minCand = ((double)s / (double)k + 0.9999);
	g_minCand = GetMax(g_minCand, maxV);

	while (g_minCand != partition(vN, 0, 0, 0, k))
		++g_minCand;

	cout << g_minCand << "\n";

	return 0;
}