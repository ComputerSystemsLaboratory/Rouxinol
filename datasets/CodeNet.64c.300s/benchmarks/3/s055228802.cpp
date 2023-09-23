#include<iostream>

using namespace std;

// 配列を用意し、インデックス0から順番に入力した値を入れていく
// 逆順に出力していく。

int main() {
	int n;
	int array[100];
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> array[i];
	}
	for (int i = n - 1; i >= 0; --i) {
		cout << array[i];
		if (i != 0) {
			cout << ' ';
		}
		else {
			cout << endl;
		}
	}

	return 0;
}