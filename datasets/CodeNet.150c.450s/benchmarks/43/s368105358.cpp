#include<iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {

	int n,A[10000],B[10000];
	int ANS[2] = {0};

	while (cin >> n, n) {
		for (int i = 0; i < n; i++) {
			cin >> A[i] >> B[i];
			if (A[i] == B[i]) {
				ANS[0] += A[i];
				ANS[1] += B[i];
			}
			else if (A[i] > B[i])
				ANS[0] += A[i] + B[i];
			else
				ANS[1] += A[i] + B[i];
		}
		cout << ANS[0] << " " << ANS[1] << endl;
		ANS[0] = 0;
		ANS[1] = 0;
	}

	return 0;

}