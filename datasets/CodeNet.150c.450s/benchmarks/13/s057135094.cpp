#include <iostream>
#include <string>
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	string s, c; cin >> s >> c;
	s += s;
	if (s.find(c) != string::npos) { cout << "Yes" << endl; }
	else { cout << "No" << endl; }
	return 0;
}