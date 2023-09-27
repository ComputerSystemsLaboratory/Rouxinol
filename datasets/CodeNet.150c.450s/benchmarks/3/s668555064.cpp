#include<iostream>
#include<string>
using namespace std;

string str;

string print(int a,int b) {
	string str2;
	str2 = str.substr(a, b - a + 1);
	return str2;
}

string reverse(int a, int b) {
	string str2;
	str2 = str.substr(a, b - a + 1);
	int len = str2.length();
	string str3 = str2;
	for (int i = 0;i < len;i++) {
		str2[i] = str3[len - 1 - i];
	}
	str2 = str.replace(a, len, str2);
	return str2;
}

string replace(int a, string s) {
	string str2;
	int len = s.length();
	str2 = str.replace(a, len, s);
	return str2;
}

int main() {
	int n, a, b;
	string cmd,s;
	cin >> str >> n;
	for (int i = 0;i < n;i++) {
		cin >> cmd >> a >> b;
		if (cmd == "print") {
			cout << print(a, b) << endl;
		}
		if (cmd == "reverse"){
			str = reverse(a, b);
		}
		if (cmd == "replace") {
			cin >> s;
			str = replace(a, s);
		}
	}
	return 0;
}