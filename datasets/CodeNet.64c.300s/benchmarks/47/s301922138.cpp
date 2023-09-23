//aoj0028
#include<iostream>
#include<algorithm>
using namespace std;

int ar[120] = {};
int b[120] = {};

int main() {
	int n;
	int ca = 0;
	while (cin >> n) {
		ar[n - 1]++;
		b[n - 1]++;
		ca++;
	}

	sort(b, b + ca);
	int max = b[ca - 1];
	for (int i = 0; i < ca; i++) {
		if (ar[i] == max) {
			cout << i+1 << endl;
		}
	}
	return 0;
}