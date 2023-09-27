#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

string tolower(string &s) {
	string t;
	for (int i = 0;i < s.length();i++) {
		t += tolower(s[i]);
	}
	return t;

}

int main(){
	string w, t;
	int cnt = 0;
	cin >> w;
	w = tolower(w);
	while (1) {
		cin >> t;
		if (t == "END_OF_TEXT") break;
		if (w == tolower(t)) cnt++;
	}
	cout << cnt << endl;
	return 0;
}