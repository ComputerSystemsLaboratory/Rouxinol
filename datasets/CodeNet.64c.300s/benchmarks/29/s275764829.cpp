#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int hyou[102];
	for (int i = 0; i < 102; i++) {
		hyou[i] = i*i*i;
	}
	int e;
	while (cin >> e) {
		if (e == 0) {
			break;
		}
		int a, b, c;
		for (int i = 1; ; i++) {
			if (hyou[i] > e) {
				c = i-1;
				break;
			}
		}
		for (int i = 1; ;i++) {
			if (i*i > e-hyou[c]) {
				b = i-1;
				break;
			}
		}
		for (int i = 1; ;i++) {
			if (i > e-hyou[c]-b*b) {
				a = i-1;
				break;
			}
		}
		int MIN = a+b+c;
		for (int i = c-1; i >= 0; i--) {
			for (int j = b+1; ; j++) {
				if (j*j > e-hyou[i]) {
					b = j-1;
					break;
				}
			}
			int q = e-hyou[i]-b*b;
			MIN = min(MIN, b+q+i);
		}
		cout << MIN << endl;
	}
	return 0;
}