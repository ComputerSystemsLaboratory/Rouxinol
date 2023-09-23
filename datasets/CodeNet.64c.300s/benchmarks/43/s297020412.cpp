#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);ios::sync_with_stdio(false);
	int A = 0, B = 0;
	for (int i = 0; i < 4;i++) {
		int s; cin >> s;
		A += s;
	}
	for (int i = 0; i < 4;i++) {
		int s; cin >> s;
		B += s;
	}
	cout << max(A, B) << endl;
}