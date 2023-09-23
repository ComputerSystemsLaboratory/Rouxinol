#include<iostream>

using namespace std;

/*
解法
クラスは３０人固定
サイズが30の固定長配列に提出したかどうか記録。
小さい順に提出していない受講生を探す。

*/

int main() {
	bool students[30] = {};

	for (int i = 0; i < 28; ++i) {
		int temp;
		cin >> temp;
		students[temp - 1] = true;
	}

	for (int i = 0; i < 30; ++i) {
		if (students[i] == false) {
			cout << i + 1 << endl;
		}
	}
}