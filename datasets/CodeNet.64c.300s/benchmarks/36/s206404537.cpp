#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[3], minv;
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 2; j > i; j--) {
			if (a[j - 1] > a[j]) {
				swap(a[j - 1], a[j]);
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		cout << a[i];
		if (i != 2) {
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}