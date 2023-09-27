#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, p;

	cin >> s >> p;
	string n = s;
	n += s;

	if (n.find(p) != string::npos)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}

