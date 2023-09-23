#include<iostream>
using namespace std;
int main() {
	int a[8];
	for (int i = 0; i < 8; i++) {
		cin >> a[i];
	}
	if (a[0] + a[1] + a[2] + a[3] > a[4] + a[5] + a[6] + a[7])cout << a[0] + a[1] + a[2] + a[3] << endl;
	else cout << a[4] + a[5] + a[6] + a[7]<<endl;
}