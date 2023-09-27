#include "bits/stdc++.h"
using namespace std;
int main() {
	int n;
	while (cin >> n,n) {
		int Sum = 0;
		int Max = -1;
		int Min = 1001;
		for (int i = 0; i < n; i++) {
			int a; cin >> a;
			Sum += a; Max = max(Max, a); Min = min(Min, a);
		}
		Sum -= Max + Min;
		cout << Sum / (n - 2) << endl;
	}
}