#include <iostream>
#include <string>
using namespace std;

int main() {

	string s, p;
	string::size_type index;

	cin >> s;
	cin >> p;

	s += s;


	index = s.find(p);

	if (index == string::npos) {
		cout << "No" << endl;
	}
	else {
		cout << "Yes" << endl;
	}


	return 0;
}