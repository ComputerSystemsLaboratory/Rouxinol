#include <iostream>
#include <vector>
#include <ios>
#include <limits.h>
using namespace std;
int n, k, sum;

int GetMax(int a, int b) { return (a > b ? a : b); }

int getMinCand(int s, int q)
{
	return ((double)s / (double)q + 0.9999);
}

bool partition(const vector<int>& vN, int minCand)
{
	int i, subsum = 0, s = vN.size(), w = 0, p = 0, r;
	for (i = 0; i < s; ++i){
		if (w + vN[i] <= minCand){
			w += vN[i];
		}else{
			subsum += w;
			w = vN[i];
			++p;
			if (p == k)
				return false;
			if (i != s - 1){
				r = getMinCand(sum - subsum, k - p);
				if (r > minCand)
					return false;
			}
		}
	}

	return true;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> k;
	vector<int> vN(n, 0);
	int maxV = INT_MIN;
	for (int i = 0; i < n; ++i){
		cin >> vN[i];
		sum += vN[i];
		if (vN[i] > maxV)
			maxV = vN[i];
	}
	int minCand = getMinCand(sum, k);
	minCand = GetMax(minCand, maxV);

	while (!partition(vN, minCand))
		++minCand;

	cout << minCand << "\n";

	return 0;
}