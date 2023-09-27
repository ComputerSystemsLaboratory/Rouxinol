#include<iostream>
using namespace std;

int ans;

void SofI(int num, int n) {
	if (num > n * 9) { return; }
	else if (num < 0) { return; }
	else if (num != 0 && n == 0) { return; }
	else if (num == 0) {
		ans++;
		return;
	}
	else {
		for (int i = 0; i < 10; i++) {
			SofI(num - i, n - 1);
		}
	}

}

int main(void) {
		int num;
		while (cin >> num) {
			if (num == 0) break;
			ans = 0;
			SofI(num, 4);
			cout << ans << endl;
		}
	return 0;
}