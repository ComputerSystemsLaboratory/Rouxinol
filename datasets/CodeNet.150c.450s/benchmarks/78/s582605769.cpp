#include <iostream>
#include <fstream>

using namespace std;

int pollock[201];
int dp1[1000001] = { 0 };
int dp2[1000001] = { 0 };

void dp() {
	for (int i = 1; i <= 200; i++) {
		pollock[i] = i*(i + 1)*(i + 2) / 6;
	}

	for (int i = 0; i < 1000000; i++) {
		dp1[i] = i;
		dp2[i] = i;
	}

	for (int i = 2; i <= 1000000; i++) {
		for (int j = 1; j <= 200; j++) {
			if (pollock[j] > i) break;
			if (dp1[i - pollock[j]] + 1 < dp1[i]) dp1[i] = dp1[i - pollock[j]] + 1;
			if (pollock[j] % 2 == 1) {
				if (dp2[i - pollock[j]] + 1 < dp2[i]) dp2[i] = dp2[i - pollock[j]] + 1;
			}
		}
	}
}

int main() {
	dp();
	ifstream fin("test.txt");
	ofstream fout("ans.txt");
	int n;
	while (true) {
		cin >> n;
		if (n == 0) break;
		cout << dp1[n] << " " << dp2[n] << endl;
	}
	return 0;
}