#include <iostream>
#include <string>
#include <set>
using namespace std;

int main () {
	int n;
	cin >> n;
	set<string> registed;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		registed.insert(str);
	}
	bool state = false;
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		string str;
		cin >> str;
		if (registed.find(str) == registed.end()) {
			cout << "Unknown " << str << endl;
		}
		else {
			if (state) {
				cout << "Closed by " << str << endl;
			}
			else {
				cout << "Opened by " << str << endl;
			}
			state = !state;
		}
	}
	return 0;
}