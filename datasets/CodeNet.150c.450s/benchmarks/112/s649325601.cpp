#include <map>
#include <string>
#include <iostream>

using std::cin;
using std::map;
using std::endl;
using std::cout;
using std::string;

int main() {
	while (true) {
		int n;
		cin >> n;
		if (n == 0) {
			break;
		}
		map<char,char> cvs; // map of conversion
		while (n--) {
			char a,b;
			cin >> a >> b;
			cvs[a] = b;
		}
		int m;
		cin >> m;
		string s = "";
		while (m--) {
			char c;
			cin >> c;
			if (cvs.find(c) != cvs.end()) {
				s.push_back(cvs[c]);
			} else {
				s.push_back(c);
			}
		}
		cout << s << endl;
	}
}