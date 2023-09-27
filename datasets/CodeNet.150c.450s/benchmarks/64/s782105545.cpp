#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
using namespace std;
long n, A[20] = {};

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	long m, i, j, k;
	cin >> n;
	for (i = 0; i < n; ++i)
		cin >> A[i];

	vector<long> vN;
	vN.reserve(1024 * 1024);
	for (i = 0; i < n; ++i){
		vN.push_back(A[i]);
		int s = vN.size();
		for (j = 0; j < s - 1; ++j)
			vN.push_back(vN[j] + A[i]);
	}
	sort(vN.begin(), vN.end());
	cin >> m;
	for (i = 0; i < m; ++i){
		cin >> k;
		cout << (binary_search(vN.begin(), vN.end(), k) ? "yes\n" : "no\n");
	}

	return 0;
}