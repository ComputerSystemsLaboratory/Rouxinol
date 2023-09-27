/*
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0004
 */
#include <iomanip>
#include <iostream>
#include <sstream>
#include <vector>

#define N 2
#define L N*(N+1)

using namespace	std;

int
main()
{
	string line;
	while (getline(cin, line)) {
		istringstream iss(line);
		vector <float> coef(L);
		for (int i = 0; i < L; i++)
			iss >> coef[i];
		float pivot, mul;
		for (int i = 0; i < N; i++) {
			pivot = coef[i * (N + 1) + i];
			for (int j = 0; j < N + 1; j++) {
				coef[i * (N + 1) + j] = (1 / pivot) * coef[i * (N + 1) + j];
			}
			for (int k = i + 1; k < N; k++) {
				mul = coef[k * (N + 1) + i];
				for (int l = i; l < N + 1; l++) {
					coef[k * (N + 1) + l] = coef[k * (N + 1) + l] - mul * coef[i * (N + 1) + l];
				}
			}
		}
		for (int i = N - 1; i > 0; i--) {
			for (int k = i - 1; k >= 0; k--) {
				mul = coef[k * (N + 1) + i];
				for (int l = i; l < N + 1; l++) {
					coef[k * (N + 1) + l] = coef[k * (N + 1) + l] - mul * coef[i * (N + 1) + l];
				}
			}
		}
		for (int i = 0; i < N; i++) {
			if (i > 0) cout << ' ';
			cout << fixed << setprecision(3) << coef[i * (N + 1) + N];
		}
		cout << endl;
	}
	return 0;
}