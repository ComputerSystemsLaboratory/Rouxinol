#include <iostream>

using namespace std;

int main() {
	int h, w;
	int d;
	while (cin >> h >> w) {
		if (h == 0 && w == 0) {
			break;
		}
		d = h*h + w*w;
		bool hantei = false;
		int i, j, k;
		k = 0;
		while (!hantei){
			if (k != 0) {
				h = 0;
			}
			for (i = h+1; i <= 150; i++) {
				for (j = i+1; j <= 150; j++) {
					if (i*i+j*j == d+k) {
						hantei = true;
						break;
						} else if (i*i+j*j > d+k) {
						break;
					}
				}
				if (hantei) {
					break;
				}
			}
			k++;
		}
		cout << i << ' ' << j << endl;
	}
	return 0;
}