#include <string>
#include <iostream>
using namespace std;
string s; int n, h;
int main() {
	while(cin >> s) {
		if(s == "-") break;
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> h;
			s = s.substr(h, s.size() - h) + s.substr(0, h);
		}
		cout << s << endl;
	}
	return 0;
}