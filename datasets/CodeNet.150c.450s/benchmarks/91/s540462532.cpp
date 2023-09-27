#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
	int i = 0, maxV = INT_MIN, A[30] = {};
	for (int k; cin >> k; ) {
		A[i++] = k;
		if (maxV < k)
			maxV = k;
	}
	int s = maxV + 1;
	vector<long> vP(s, 0);
	int c = 0, j;
	for (int k = 2; k < s; ++k){
		if (vP[k] == 0){
			vP[k] = ++c;
			for (j = 2; j * k < s; ++j)
				vP[j * k] = -1;
		}
		else if (vP[k] == -1)
			vP[k] = c;		
	}
	for (j = 0; j < i; ++j)
		cout << vP[A[j]] << "\n";
	return 0;
}