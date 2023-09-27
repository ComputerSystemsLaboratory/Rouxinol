#include <iostream>
#include <vector>
#include <map>
#include <cstdio>

using namespace std;

int main() {
	int n; cin >> n;
	map<string, int> uid;
	for (int i = 0; i < n; ++i) {
		string str; cin >> str;
		uid[str] = i;
	}
	int m; cin >> m;
	bool f = false;
	for (int i = 0; i < m; ++i) {
		string str; cin >> str;
		if (uid.find(str) != uid.end()) {
			if (!f) printf("Opened by %s\n", str.c_str());
			else printf("Closed by %s\n", str.c_str());
			f = !f;
		}
		else {
			printf("Unknown %s\n", str.c_str());
		}
	}
}