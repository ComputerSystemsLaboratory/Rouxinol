#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string reverse(string s){
	string t;
	int l = s.length();
	for (int i = 0; i < l; i++){
		t += s[l - i - 1];
	}
	return t;
}

int main(){
	string s, c1, c4;
	ostringstream oss;
	int q, c2, c3;
	cin >> s >> q;
	for (int i = 0; i < q; i++){
		cin >> c1 >> c2 >> c3;
		if (c1 == "print"){
			oss << s.substr(c2, c3 - c2 + 1) << endl;
			cout << s.substr(c2, c3 - c2 + 1) << endl;
		}
		if (c1 == "reverse"){
			s = s.substr(0, c2) + reverse(s.substr(c2, c3 - c2 + 1)) + (c3 == s.length() - 1 ? "" : s.substr(c3 + 1));
		}
		if (c1 == "replace"){
			cin >> c4;
			s = s.substr(0, c2) + c4 + (c3 == s.length() - 1 ? "" : s.substr(c3 + 1));
		}
	}
	//cout << oss.str() << endl;
}
