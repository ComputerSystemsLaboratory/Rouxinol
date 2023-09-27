#include <iostream>
#include <vector>

using namespace std;

int main(void){
	while (1) {
		int n; cin >> n;
		if (!n) break;

		vector<char> v1, v2;
		for (int i = 0; i < n; i++) {
			char c;
			cin >> c; v1.push_back(c);
			cin >> c; v2.push_back(c);
		}

		int m; cin >> m;
		for (int i = 0; i < m; i++) {
			char b; cin >> b;
			for (int j = 0; j < n; j++) {
				if (b == v1[j]) {
					b = v2[j];
					break;
				}
			}

			cout << b;
		}

		cout << endl;
	}
}
 