#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	cout << string(s.rbegin(),s.rend()) << endl;
	return 0;
}