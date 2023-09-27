#include<iostream>
using namespace std;
void bubbleSort(int[], int);

int main() {
	int n, a[110];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bubbleSort(a, n);
	return 0;
}

void bubbleSort(int a[], int n) {
	bool flag = true;
	int count = 0;
	while (flag) {
		flag = false;
		for (int i = n - 1; i >= 1; i--) {
			if (a[i - 1] > a[i]) {
				int copy = a[i];
				a[i] = a[i - 1];
				a[i - 1] = copy;
				flag = true;
				count++;
			}
		} 
	}
	for (int i = 0; i < n; i++) {
		cout << a[i];
		if (i == n - 1) cout << endl;
		else cout << " ";
	}
	cout << count << endl;

}