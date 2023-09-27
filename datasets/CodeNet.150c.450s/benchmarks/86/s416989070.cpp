#include<iostream>
using namespace std;

int main() {
	int n, m, p;
	while (cin >> n >> m >> p, n) {
		int sum = 0, princess;
		for (int i = 0; i < n; ++i) {
			int person; cin >> person;
			sum += person;
			if (i == m - 1)princess = person;
		}
		if (princess)cout << sum * 100 * (100 - p) / 100 / princess << endl;
		else cout << "0" << endl;
	}
}