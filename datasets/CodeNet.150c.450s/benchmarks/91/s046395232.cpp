#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
	int k, n, s, t, i = 0, j, maxV = INT_MIN, A[30] = {};
	while (cin >> k) {
		A[i++] = k;
		if (maxV < k)
			maxV = k;
	}
	s = maxV + 1;
	vector<long> vP(s, 0);
	int c = 0;
	for (k = 2; k < s; ++k){
		if (vP[k] == 0)
			vP[k] = ++c;
		t = (s - 1) / k;
		for (j = 2; j <= t; ++j)
			vP[j * k] = -1;
	}
	for (j = 0; j < i; ++j){
		k = vP[A[j]];
		if (1 == A[j])
			k = 0;
		else if(-1 == k)
			while (-1 == (k = vP[--A[j]])){}
		cout << k << "\n";
	}
	return 0;
}