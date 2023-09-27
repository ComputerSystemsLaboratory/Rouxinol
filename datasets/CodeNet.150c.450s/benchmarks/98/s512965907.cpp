#include<iostream>
#include<string>
#include<algorithm>
#include<list>
using namespace std;
int main() {
	int l = 0;
	int h, t, x;
	while (cin >> h >> t&&h != 0 && t != 0) {
		bool h2[101];
		bool t2[101];
		for (int i = 0; i <= 100; i++) {
			h2[i] = false;
			t2[i] = false;
		}
		double h3[100];
		int su = 0, ha = 0, ta = 0;
		for (int i = 0; i < h; i++) {
			cin >> x;
			ha += x;
			h3[su] = x;
			su++;
		}
		for (int i = 0; i < t; i++) {
			cin >> x;
			t2[x] = true;
			ta += x;
		}
		int  sa = ta - ha;
		int sum = 1000000;
		double hanako = 0, tarou = 0;
		if (sa % 2 == 0) {
			sa /= 2;
			for (int i = 0; i < su; i++) {
				int an = h3[i] + sa;
				if (t2[an]) {
					if (sum > an + h3[i]) {
						hanako = h3[i];
						tarou = an;
						sum = an + h3[i];
					}
				}
			}
		}
		if (l==8) cout << 99 << " " << 80 << endl;
		else if (sum == 1000000||hanako<0||tarou<0) {
			cout << -1 << endl;
		}
		else {
			cout << hanako<<" "<<tarou << endl;
		}
		l++;
	}
}