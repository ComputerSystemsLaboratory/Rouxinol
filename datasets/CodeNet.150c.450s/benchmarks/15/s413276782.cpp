#include <iostream>

using namespace std;

int main() {
	int n;
	int *S;
	int q;
	int *T;
	cin >> n;
	//S = new int[n];
	S = new int[n+1];
	for (int i = 0; i < n; ++i) {
		cin >> S[i];
	}

	cin >> q;
	T = new int[q];
	for (int i = 0; i < q; ++i) {
		cin >> T[i];
	}

	int count = 0;
	//for (int i = 0; i < q; ++i) {
	//	for (int j = 0; j < n; ++j) {
	//		if (S[j] == T[i]) {
	//			++count;
	//			break;
	//		}
	//	}
	//}
	for (int i = 0; i < q; ++i) {
		S[n] = T[i];
		int j = -1;
		while (S[++j] != T[i]) {
			;
		}
		if (j != n) {
			++count;
		}
	}

	cout << count << endl;

	return 0;
}