#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
	string s;

	getline(cin, s);

	for(int i = 0;i < s.size();i++) {
		if(isupper(s.at(i))) {
			s.at(i) = tolower(s.at(i));
		} else if(islower(s.at(i))) {
			s.at(i) = toupper(s.at(i));
		}
	}

	cout << s << endl;

	return 0;
}