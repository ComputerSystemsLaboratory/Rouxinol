#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	while (1) {
		string t;
		cin >> t;
		if (t == "-")
			break;
		int n, h;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> h;
			string t2 = t.substr(0, h);
			t.erase(0, h);
			t += t2;
		}
		cout << t << endl;
	}
	return 0;
}