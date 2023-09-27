#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int m, h;

	cin >> s;

	while(s != "-") {
		cin >> m;

		for(int i = 0;i < m;i++) {
			cin >> h;
		
			s = s.substr(h, s.size() - h) + s.substr(0, h);
		}

		cout << s << endl;

		cin >> s;
	}

	return 0;
}