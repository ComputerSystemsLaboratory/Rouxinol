#include<iostream>
#include<string>

using namespace std;
int main() {
	string s, p;
	cin >> s >> p;
	s += s;
	int j = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == p[j]) {
			for (int j = 0; j < p.length()+1; j++) {
				if (p[j] == '\0') {
					cout << "Yes" << endl;
					return 0;
				}
				if (s[i + j] != p[j]) break;
			}
		}
	}
	cout << "No" << endl;
	return 0;
}