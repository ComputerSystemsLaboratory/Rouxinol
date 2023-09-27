#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	int n,m;
	char tmp;
	while (cin >> n) {
		if (n == 0) break;
		pair<char, char> key[n];
		for (int i=0; i<n; i++) {
			cin >> key[i].first >> key[i].second;
		}
		cin >> m;
		string ans = "";
		for (int i=0; i<m; i++) {
			cin >> tmp;
			for (int j=0; j<n; j++) {
				if (tmp == key[j].first) {
					tmp = key[j].second;
					break;
				}
			}
			ans += tmp;
		}
		cout << ans << endl;
	}
	return 0;
}