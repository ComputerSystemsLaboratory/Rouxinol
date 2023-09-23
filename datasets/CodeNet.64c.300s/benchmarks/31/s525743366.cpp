#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
int rui(int n) {
	if (n == 0) {
		return 1;
	}
	return 2 * rui(n - 1);
}
int ord(int a) {
	if (a % 2 == 1) {
		return 0;
	}
	return 1+ord(a / 2);
}
using namespace std;
int main() {
	int ans = rui(31) - 2;
	for (int i = 0; i < 28; i++) {
		int x; cin >> x;
		ans -= rui(x);
	}
	int k = ord(ans);
	cout << k << endl << ord(ans-rui(k))<<endl;
}
