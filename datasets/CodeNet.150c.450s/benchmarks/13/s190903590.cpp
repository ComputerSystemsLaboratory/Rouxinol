#include <iostream>
#include <string>

using namespace std;

int main(void){
	string s, p;
	cin >> s >> p;
	s = s + s;
	if (s.find(p) != string::npos) {
		cout << "Yes" << "\n";
	}
	else {
		cout << "No" << "\n";
	}

	return 0;
}