#include<iostream>
#include<vector>
#include<queue>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main() {
	while (true) {
		int n = 0;
		cin >> n;
		if (n == 0) {
			break;
		}

		int a = 0;
		int b = 0;
		for (int i = 0; i < n; ++i) {
			int s, t;
			cin >> s >> t;
			if (s > t) {
				a += s + t;
			} else if (s < t) {
				b += s + t;
			} else {
				a += s;
				b += t;
			}
		}

		cout << a << " " << b << endl;

	}
	return 0;
}