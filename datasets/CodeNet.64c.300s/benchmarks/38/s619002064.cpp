#include<bits/stdc++.h>
using namespace std;
int n, a, b;
int data[10] = { 0 };

int main() {
	cin >> n;

	for (int i = 0; i < n; ++i) {
		int boxa = 0, boxb = 0;
		bool flag = false;
		for (int j = 0; j < 10; ++j) {
			cin >> data[j];
		}
		for (int j = 0; j < 10; ++j) {
			if (boxa > boxb && boxa < data[j]) {
				boxa = data[j];
			} else if (boxb < data[j]) {
				boxb = data[j];
			} else if (boxa < data[j]) {
				boxa = data[j];
			} else {
				cout << "NO" << endl;
				flag = true;
				break;
			}
		}
		if (!flag)cout << "YES" << endl;
	}
}