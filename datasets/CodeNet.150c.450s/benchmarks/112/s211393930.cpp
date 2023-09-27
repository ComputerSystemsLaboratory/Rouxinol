#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	int n, m;
	while (cin >> n, n) {
		char a, b;
		string str;
		map<char, char> to;
		for (int i = 0; i < n; ++i) {
			cin >> a >> b;
			to[a] = b;
		}
		cin >> m;
		for (int i = 0; i < m; ++i) {
			cin >> a;
			if (to[a]) a = to[a];
			str += a;
		}
		cout << str << endl;
	}
	return 0;
}