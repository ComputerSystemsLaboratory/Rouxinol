#include<iostream>
#include<vector>
using namespace std;

int main() {
	while (1) {
		int m, l, f;
		vector<int> mem;
		cin >> m >> l >> f;
		if (m == 0)break;

		for (int i = 0; i < m; i++) {
			int x;
			cin >> x;
			mem.push_back(x);
		}

		int gap = 0, gapi = 0;
		for (int i = l - 1; i < f; i++) {
			if (mem[i] - mem[i + 1] >= gap) {
				gap = mem[i] - mem[i + 1];
				gapi = i;
			}
		}
		cout << gapi + 1 << endl;
	}
	return 0;
}