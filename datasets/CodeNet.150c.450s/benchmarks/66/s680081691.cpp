#include <cstdlib>
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	set<string> u;
	for(int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		u.insert(s);
	}

	int m;
	cin >> m;

	bool lock = true;
	for(int i = 0; i < m; ++i) {
		string t;
		cin >> t;

		if(u.find(t) != u.end()) {
			if(lock)
				cout << "Opened by " << t << endl;
			else
				cout << "Closed by " << t << endl;

			lock = !lock;
		}
		else {
			cout << "Unknown " << t << endl;
		}
	}
	
	return EXIT_SUCCESS;
}