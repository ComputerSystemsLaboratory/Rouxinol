#include<iostream>
using namespace std;

int C(int n) {
	int count=0,a, b, c, d;
	for (a = 0; a <= 9; a++) {
		for (b = 0; b <= 9; b++) {
			for (c = 0; c <= 9; c++) {
				for (d = 0; d <= 9; d++) {
					if (a + b + c + d == n) {
						count += 1;
					}
				}
			}
		}
	}
	return count;
}

int main() {
	int n,ans;
	while(cin >> n){
		ans = 0;
		ans = C(n);
		cout << ans << endl;
	}
	return 0;
}