#include <iostream>
using namespace std;

int main() {
	int n, m;
	while(cin >> n, n) {
		cin.ignore();
		int conv[256] = {};
		for(int i = 0; i < n; i++) {
			char c, d;
			cin >> c; cin.ignore();
			cin >> d; cin.ignore();
			conv[c] = d;
		}
		cin >> m; cin.ignore();
		for(int i = 0; i < m; i++) {
			char c;
			cin >> c; cin.ignore();
			if(conv[c])
				cout << (char)conv[c];
			else
				cout << c;
		}
		cout << endl;
	}
}