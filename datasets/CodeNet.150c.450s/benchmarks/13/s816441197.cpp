#include<iostream>
#include<string>
using namespace std;
int main() {
	string s, str;
	cin >> s >> str;
	s += s;
	if ((int)s.find(str) != -1)
		cout << "Yes";
	else cout << "No";
	cout << endl;
	return 0;
}