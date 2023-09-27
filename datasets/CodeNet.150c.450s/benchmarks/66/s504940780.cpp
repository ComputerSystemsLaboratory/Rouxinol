#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main(void) {
	int n, m;
	string id;
	string U[256];
	bool opened = false, unknown;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> U[i];
	}
	cin >> m;
	for(int i = 0; i < m; i++) {
		cin >> id;
		unknown = true;
		for(int i = 0; i < n; i++) {
			if(id == U[i]) {
				cout << (opened ? "Closed by " : "Opened by ") << id << endl;
				opened = !opened;
				unknown = false;
				break;
			}
		}
		if(unknown) cout << "Unknown " << id << endl;
	}

	return 0;
}