#include <iostream>
using namespace std;

#define REP(x, y) for (x = 1; x < y; x++)

int combination (int n);

int main(void) {
	int N;

	while (cin >> N, N) cout << combination(N) << endl;

	return 0;
}

int combination (int n) {
	int count = 0, i, j, k;

	REP(i, n) REP(j, n) if ((i * (j + 1) + (j * (j - 1) / 2 + j) == n)) count++;
	return count;
}