#include <bits/stdc++.h>
using namespace std;

int main()
{
	while (true)
	{
		int r, l;
		string op;
		cin >> r >> op >> l;
		if (op == "?")
		{
			break;
		}
		if (op == "+")
		{
			cout << r + l << endl;
		}
		if (op == "-")
		{
			cout << r - l << endl;
		}
		if (op == "*")
		{
			cout << r * l << endl;
		}
		if (op == "/")
		{
			cout << static_cast<int>(r / l) << endl;
		}
	}
	return 0;
}