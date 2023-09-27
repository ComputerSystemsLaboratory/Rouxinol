#include <iostream>

using namespace std;

int main() {
	string s, p;
	getline(cin, s);
	getline(cin, p);
	s = s + s;
	if (s.find(p, 0) != string::npos)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}