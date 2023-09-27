#include <iostream>
#include <string>
using namespace std;

int n;
string u[256];
int m;
string t;

int main() {
	int i, j;
	
	cin >> n;
	for (i = 0; i < n; i++) cin >> u[i];
	cin >> m;
	
	bool isOpen = false;
	for (i = 0; i < m; i++) {
		cin >> t;
		for (j = 0; j < n; j++) {
			if (t == u[j]) {
				break;
			}
		}
		if (j < n) {
			isOpen = !isOpen;
			if (isOpen) { cout << "Opened by " << t << endl; }
			else { cout << "Closed by " << t << endl; }
		}
		else {
			cout << "Unknown " << t << endl;
		}
	}
	
	return 0;
}