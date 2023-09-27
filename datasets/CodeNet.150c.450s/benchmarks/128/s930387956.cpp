#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	for(int i=1; i<=s.size(); i++) cout << s[s.size()-i];
	cout << endl;
	return 0;
}
