#include<iostream>
using namespace std;
int main() {
	int n;
	int a[250];
	cin >> n;
	for (int j = 0; j < n; j++) {
		cin >> a[j];
	}
	for (int j = 0; j < n; j++) {
		cout << "node " << j+1 << ": key = " << a[j]<<", " ;
			if (j != 0) {
				int k = (j -1)/ 2;
				cout << "parent key = " << a[k]<<", " ;
			}
			int right = j * 2 + 2;
			int left = j * 2 + 1;
			if (left < n) {
				cout << "left key = " << a[left] << ", ";
			}
			if (right < n) {
				cout << "right key = " << a[right] << ", ";
			}
			cout << endl;
	}
	return 0;
}