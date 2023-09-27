#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, p;
	cin >> s >> p;
	s += s;
	if (s.find(p) == -1)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
}