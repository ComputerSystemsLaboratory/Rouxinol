#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
	int n, k, p, m;
	bool isPlus = true;
	while (cin >> n){
		if (0 == n) break;
		vector<int> A(n, 0);
		m = INT_MIN;
		p = 0;
		for (int i = 0; i < n; ++i){
			cin >> k;
			if (m < k) m = k;
			if (0 == i){
				A[p] = k;
				isPlus = (k > 0);
			}
			else {
				if (isPlus == (k > 0)){
					A[p] += k;
				}else{
					++p;
					A[p] = k;
					isPlus = !isPlus;
				}
			}
		}
		vector<int> B(p + 1, 0);
		vector<int> C(p + 1, 0);
		for (int i = 0; i <= p; ++i){
			if (0 == i)
				C[0] = B[0] = A[0];
			else{
				int s = B[i - 1];
				for (int j = 0; j <= i; ++j){
					C[j] += A[i];
					if (s < C[j]) s = C[j];
				}
				B[i] = s;
			}
		}
		if (m < B[p]) m = B[p];
		cout << m << "\n";
	}
	return 0;
}