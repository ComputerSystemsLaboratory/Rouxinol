#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define NMAX 1000
int lcs[NMAX+1][NMAX+1];

int solveLCS(string S1, string S2) {
	int n1 = S1.size(), n2 = S2.size(), vmax = 0;
	
	for (int i = 0; i <= n1; i++) lcs[i][0] = 0;
	for (int i = 0; i <= n2; i++) lcs[0][i] = 0;

	for (int i = 1; i <= n1; i++) {
		for (int j = 1; j <= n2; j++) {
			if (S1[i - 1] == S2[j - 1]) {
				lcs[i][j] = lcs[i - 1][j - 1] + 1;
			}
			else {
				lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
			}
			vmax = max(vmax, lcs[i][j]);
		}
	}
	return vmax;
}

int main() {
	int N; cin >> N;
	string S1, S2;

	for (int i = 0; i < N; i++) {
		cin >> S1 >> S2;
		cout << solveLCS(S1, S2) << endl;
	}
	return 0;
}
