#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(void){
	while (1) {
		int n; cin >> n;
		if (!n) break;

		map<char, char> trans;
		for (int i = 0; i < n; i++) {
			char c, c2; cin >> c >> c2;
			trans[c] = c2;
		}

		int m; cin >> m;
		for (int i = 0; i < m; i++) {
			char b; cin >> b;

			if (trans[b]) b = trans[b];

			cout << b;
		}

		cout << endl;
	}
}
 