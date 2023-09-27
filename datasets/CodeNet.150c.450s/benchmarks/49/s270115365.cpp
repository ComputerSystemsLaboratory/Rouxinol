#include<iostream>

using namespace std;

int main() {
	double ave;
	int ans,a,b, n,max,min;
	while (1) {
		ave = 0;
		cin >> n;
		b = 0;
		if (n == 0)break;
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (b == 0) {
				max = a;
				min = a;
			}
			else {
				if (a > max)max = a;
				if (a < min)min = a;
			}
			ave += a;
			b = 1;
		}
		ans = (ave - max - min) / (n - 2);
		cout << ans << endl;
	}
	return 0;
}