#include<iostream>
#include<vector>
#include<string>
#define N 1000001
using namespace std;

int main() {
	vector<bool>sosuu(N, true);
	sosuu[0] = sosuu[1] = false;
	for (int b = 2; b < N; b++) {
		if (sosuu[b]) {
			for (int c = b * 2; c < N; c += b)sosuu[c] = false;
		}
	}
	int d, e, f;
	while (cin >> d >> e >> f, d | e | f) {
		int s = 0;
		for (;; d += e) {
			if (sosuu[d])s++;
			if (s == f) { cout << d << endl; break; }
		}
	}
}