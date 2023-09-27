#include <iostream>
using namespace std;

int main(void) {

	while (1) {
		bool flag = true;
		int h, w;
		int now, maxi = 1000000;
		int ho, wo;

		cin >> h >> w;
		if (h == 0) {
			break;
		}
		now = h*h + w*w;

		for (int i = 1; i <= 150; i++) {
			for (int t =i+1; t <= 150; t++) {
				if (i*i + t*t > now&&i*i + t*t < maxi) {
					ho = i;
					wo = t;
					maxi = i*i + t*t;
					break;
				}
				else if (i*i + t*t == now&&i>h) {
					ho = i;
					wo = t;
					flag = false;
					break;
				}
			}
			if (!flag) {
				break;
			}
		}
		cout << ho << " " << wo << endl;
	}
	
	return 0;
}
