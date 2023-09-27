
/* vo00_06.cpp */
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	string::iterator istr;
	cin >> str;

	while (str.size()) {
		istr = str.end();
		cout << str.at(str.size() - 1);
		str.erase(istr - 1, istr);
	}

	cout << '\n';

	return 0;
}