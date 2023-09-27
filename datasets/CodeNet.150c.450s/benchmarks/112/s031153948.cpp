#include <iostream>

using namespace std;

int main() {
	int n, m;
	char table[256];

	while (cin >> n, n) {
		for (int i = 0; i < 256; i++)
			table[i] = 0;
	
		for (int i = 0; i < n; i++) {
			char a, b;
			cin >> a >> b;
			table[a] = b;
		}
	
		cin >> m;
		for (int i = 0; i < m; i++) {
			char a;
			cin >> a;
			if (table[a])
				cout << table[a];
			else
				cout << a;
		}
		cout << endl;
	}

	return 0;
}