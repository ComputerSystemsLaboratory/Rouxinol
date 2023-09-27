#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	int q;

	cin >> str;
	cin >> q;

	while (q--)
	{
		string cmd;
		cin >> cmd;

		if (cmd == "print")
		{
			int a, b;
			cin >> a >> b;

			cout << str.substr(a, b - a + 1) << endl;
		}
		else if (cmd == "reverse")
		{
			int a, b;
			cin >> a >> b;

			reverse(str.begin() + a, str.begin() + b + 1);
		}
		else if (cmd == "replace")
		{
			string p;
			int a, b;
			cin >> a >> b >> p;

			str.replace(str.begin() + a, str.begin() + b + 1, p);
		}
	}

	return 0;
}