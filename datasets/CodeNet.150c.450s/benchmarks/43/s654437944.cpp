#include<iostream>
using namespace std;
static const int N = 10000;

int main() {
	int n;
	int i;
	int A[N];
	int B[N];
	int score_A = 0;
	int score_B = 0;

	while (1) {
		cin >> n;

		if (n == 0) break;

		for (i = 0; i < n; i++) {
			cin >> A[i];
			cin >> B[i];
		}

		for (i = 0; i < n; i++) {
			if (A[i] > B[i]) {
				score_A += A[i] + B[i];
			}
			else if (A[i] < B[i]) {
				score_B += A[i] + B[i];
			}
			else if (A[i] = B[i]) {
				score_A += A[i];
				score_B += B[i];
			}
		}

		cout << score_A << " " << score_B << endl;

		for (i = 0; i < n; i++) {
			score_A = 0;
			score_B = 0;
		}
	}
	return 0;
}