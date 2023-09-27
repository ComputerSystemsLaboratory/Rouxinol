//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0007
#include <iostream>
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	int debt = 100000;
	for (int i = 0; i < n;i++) {
		debt *= 1.05;
		if (debt % 1000 != 0) {
			debt = (debt / 1000) * 1000  + 1000;
		}
	}
	cout << debt << endl;
}