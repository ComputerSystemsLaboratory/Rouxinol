#include<iostream>
#include <string>

using namespace std;

int main()
{
	int a, b, ans;
	string op;

	while (1)
	{
		// ??\???
		cin >> a >> op >> b;

		if (op == "+")
		{
			ans = a + b;
			cout << ans << endl;
		}
		else if (op == "-")
		{
			ans = a - b;
			cout << ans << endl;
		}
		else if (op == "*")
		{
			ans = a * b;
			cout << ans << endl;
		}
		else if (op == "/")
		{
			ans = a / b;
			cout << ans << endl;
		}
		else
		{
			break;
		}
	}

	return 0;
}