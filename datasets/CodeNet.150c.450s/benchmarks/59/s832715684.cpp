#include <iostream>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_A

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	cout << arr[0];
	for (int j = 1; j < n; j++) cout << " " << arr[j];
	cout << endl;
	
	for (int i = 1; i < n; i++) {
		int current = arr[i];
		if (arr[i - 1] > current) {
			int j = i;
			do {
				arr[j] = arr[j - 1];
				j--;
			} while (j > 0 && arr[j - 1] > current);
			arr[j] = current;
		}
		cout << arr[0];
		for (int j = 1; j < n; j++) cout << " " << arr[j];
		cout << endl;
	}
	return 0;
}