#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> furui(1000001, 0);
	furui[0] = furui[1] = 1;
	for (int i = 2; i*i <= 1000001; i++) {
		if (furui[i] == 0) {
			for (int j = 2; j <= 1000001/i; j++) {
				furui[i*j] = 1;
			}
		}
	}

	int a, d, n;
	while (cin >> a >> d >> n) {
		if (a == 0 && d == 0 && n == 0) {
			break;
		}
		while(n > 0) {
			if(furui[a] == 0) {
				n--;
			}
			a += d;
		}
		cout << a-d << endl;
	}
	return 0;
}