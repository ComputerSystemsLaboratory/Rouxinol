#include <iostream>

using namespace std;

int main() {
	int N;
	int v[200];
        int dpA[1000000], dpB[1000000];
	for (int i = 0; i<=200; i++) v[i] = i * (i + 1)*(i + 2) / 6;
	dpA[0] = dpB[0] = 0;
	for (int i = 1; i<1000000; i++) {
		dpA[i] = dpB[i] = i;
		for (int j = 0; i - v[j] >= 0; j++) {
			dpA[i] = min(dpA[i], dpA[i - v[j]] + 1);
			if (v[j] % 2 == 1)
				dpB[i] = min(dpB[i], dpB[i - v[j]] + 1);
		}
	}
	while (cin >> N, N)
		cout << dpA[N] << " " << dpB[N] << endl;
}
