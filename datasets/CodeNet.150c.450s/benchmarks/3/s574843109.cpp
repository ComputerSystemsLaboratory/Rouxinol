#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string str;
	int n;
	cin >> str >> n;
	while (n--) {
		string opr;
		int first_i,last_i;
		cin >> opr >> first_i >> last_i;
		if (opr == "print") {
			cout << str.substr(first_i,last_i-first_i+1) << endl;
		} else if (opr == "replace") {
			string rep;
			cin >> rep;
			str.replace(first_i,last_i-first_i+1,rep);
		} else { // reverse
			reverse(str.begin()+first_i,str.begin()+last_i+1);
		}
	}
}