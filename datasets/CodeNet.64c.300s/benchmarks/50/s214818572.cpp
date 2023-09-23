#include <iostream>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_A

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	
	int count = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j >= i + 1; j--) {
			if (arr[j - 1] > arr[j]) {
				int t = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = t;
				count++;
			}
		}
	}
	
	cout << arr[0];
	for (int i = 1; i < n; i++) cout << " " << arr[i];
	cout << endl;
	cout << count << endl;
	return 0;
}