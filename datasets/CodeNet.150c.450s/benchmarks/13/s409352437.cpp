#include<iostream>
#include<string>
using namespace std;
int main() {
	string s,p;
	cin >> s >> p;
	s += s;
	cout << (s.find(p) != string::npos ? "Yes":"No") << "\n";
	return 0;
}