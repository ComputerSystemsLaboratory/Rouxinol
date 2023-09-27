#include<iostream>
#include<string>
#include<map>
using namespace std;
int main() {
	map<char, char>low;
	char C = 'A';
	for (char c = 'a'; c <= 'z'; c++) {
		low[c] = c;
		low[C] = c;
		C++;
	}
	string str; cin >> str;
	string s, st;
	int ans = 0;
	while (cin >> st) {
		if (st == "END_OF_TEXT") {
			cout << ans << endl;
			break;
		}
		else {
			for (int i = 0; i < st.size(); i++)s += low[st[i]];
			if (str == s)ans++;
			s = "";
		}
	}
	cin >> st;
}