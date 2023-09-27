#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int a, l;
	while (cin >> a >> l) {
		if (a == 0 && l == 0) {
			break;
		}
		int kazu[6];
		int kazu2[6];
		int k;
		int hyou[25];
		hyou[0] = a;
		for (k = 1; k <= 20; k++) {
			for (int i = l-1; i >= 0; i--) {
				kazu[i] = kazu2[i] = a % 10;
				a /= 10;
			}
			for (int i = l-1; i > 0; i--) {
				for (int j = 0; j < i; j++) {
					if (kazu[j] < kazu[j+1]) {
						swap(kazu[j], kazu[j+1]);
					}
					if (kazu2[j] > kazu2[j+1]) {
						swap(kazu2[j], kazu2[j+1]);
					}
				}
			}
			int max, min;
			max = min = 0;
			for (int i = 0; i < l; i++) {
				max *= 10;
				min *= 10;
				max += kazu[i];
				min += kazu2[i];
			}
			a = max - min;
			bool hantei = false;
			for (int i = 0; i < k; i++) {
				if (a == hyou[i]) {
					cout << i << ' ' << a << ' ' << k-i << endl;
					hantei = true;
					break;
				}
			}
			if (hantei) {
				break;
			}
			hyou[k] = a;
		}
	}
	return 0;
}