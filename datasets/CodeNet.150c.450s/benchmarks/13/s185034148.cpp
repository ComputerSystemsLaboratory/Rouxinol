#include <iostream>
#include <regex>

using namespace std;

int main()
{
	string s, p;
	regex re;
	cin >> s >> p;
	re = p;
	s += s;
	if (regex_search(s, re)) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}