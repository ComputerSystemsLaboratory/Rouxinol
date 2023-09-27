#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int op;
	cin >> op;

	for (int i = 0; i < op; i++)
	{
		string op_s;
		cin >> op_s;

		if (op_s == "replace")
		{
			int a, b;
			string p;
			cin >> a >> b >> p;
			str.replace(a, p.size(), p);
		}
		else if (op_s == "reverse")
		{
			int a, b;
			cin >> a >> b;

			for (int x = a,y = b; x<y; x++, y--) {
				char c = str[x];
				str[x] = str[y];
				str[y] = c;
			}
		}
		else if (op_s == "print")
		{
			int a, b;
			cin >> a >> b;

			for (int x = a; x <= b; x++)
				cout << str[x];
			cout << endl;
		}
	}

	return 0;
}