#include <iostream>
#include <set>

using namespace std;

int main(void) {
	int n;
	string id;
	set<string> sU;
	bool opened = false;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> id;
		sU.insert(id);
	}
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> id;
		if(sU.find(id) == sU.end()) {
			cout << "Unknown " << id << endl;
		} else {
			cout << (opened ? "Closed by " : "Opened by ") << id << endl;
			opened = !opened;
		}
	}
	return 0;
}