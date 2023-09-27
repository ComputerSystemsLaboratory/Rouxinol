#include<iostream>
using namespace std;
int main() {
	int a[11],date[11];
	for (int i = 1; i <= 5; i++) {
		cin >> a[i];
	}
	int dai = -999999;
	int o;
	for (int i = 1; i <= 5; i++) {
		int dai = -999999;
		for (int z = 1; z <= 5; z++) {
			if (dai <= a[z]) {
				dai = a[z];
				o = z;
			}
		}
		date[i] = dai;
		a[o] = -9999999;
	}
	for (int i = 1; i <= 4; i++) {
		cout << date[i]<<" ";
	}
	cout << date[5] << endl;
}
