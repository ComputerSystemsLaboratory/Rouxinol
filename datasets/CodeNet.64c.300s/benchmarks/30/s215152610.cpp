#include<cstdio>
#include<iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) break;
		n = 1000 - n;
		int ans = 0, i;
		int w[6] = { 500,100,50,10,5,1 };
		for (i = 0; i <= 5; i++) {
			ans = ans + n / w[i];
			n = n - n / w[i] * w[i];
		}
		cout << ans << endl;
	}
	return 0;
}