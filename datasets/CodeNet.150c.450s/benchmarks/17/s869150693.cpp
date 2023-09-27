#include<iostream>

using namespace std;

// バブルソートで使うスワップ
// ループの中に書きたくなかったので関数化。
void swap(int& l, int &r) {
	int temp = l;
	l = r;
	r = temp;
}

int main() {
	int temp[5];
	for (int& a : temp) {
		cin >> a;
	}
	// 数が少ないのでバブルソートを実装してみる
	for (int i = 0; i < 4; ++i) {
		for (int j = 1; j < 5; ++j) {
			if (temp[j - 1] < temp[j]) {
				swap(temp[j - 1], temp[j]);
			}
		}
	}

	for (int i = 0; i < 5; ++i) {
		cout << temp[i];
		if (i != 4) {
			cout << " ";
		}
		else {
			cout << endl;
		}
	}

	return 0;
}