#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::greater;

int main() {
	const int N = 5;
	int num[N];
	for (int i = 0; i < N; ++i) {
		cin >> num[i];
	}
	sort(num, num + N, greater<int>());
	for (int i = 0; i < N; ++i) {
		cout << num[i];
		if (i == N - 1) {
			cout << endl;
		} else {
			cout << ' ';
		}
	}
	return 0;
}