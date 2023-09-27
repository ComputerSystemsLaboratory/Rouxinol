#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int num[10];

bool f;
void dfs(int x, int l, int r) {
	if (x == 10) {
		f = true;
	}
	if (num[x] > l) {
		dfs(x + 1, num[x], r);
	}
	if (num[x] > r) {
		dfs(x + 1, l, num[x]);
	}
}

int main() {
	int T;
	cin >> T;
	cin.ignore();
	while (T--) {
		string line;
		getline(cin, line);
		stringstream ss(line);
		for (int i = 0; i < 10; i++) {
			ss >> num[i];
		}
		f = false;
		dfs(0, 0, 0);
		if (f) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}