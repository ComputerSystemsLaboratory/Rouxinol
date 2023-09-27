#include "bits/stdc++.h"
using namespace std;
int main() {
	int a[4], b[4];
	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]) {
		int n1 = 0, n2 = 0;
		for (int i = 0; i < 4;i++) {
			if (a[i] == b[i])n1++;
		}
		for (int i = 0; i < 4;i++) {
			for (int j = 0; j < 4;j++) {
				if (i == j)continue;
				if (a[i] == b[j]) n2++;
			}
		}
		cout << n1 << " " << n2 << endl;
	}
}