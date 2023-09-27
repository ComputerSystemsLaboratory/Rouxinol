#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	vector<string>l;
	string s;
	int m;
	while (cin >> s) {
		if (s == "-")break;
		cin >> m;
		for (int i = 0; i < m; i++) {
			int a;
			cin >> a;
			string st;
			for (int i = 0; i < a; i++) {
				st += s[0];
				s.erase(s.begin() + 0);
			}
			s += st;
		}
		l.push_back(s);
	}
	for (string i : l)cout << i << endl;
	cin >> s;
}