#include <iostream>
#include <string>
using namespace std;


int main()
{
	string s;

	while (cin >> s)
	{
		if (s == "0") return 0;

		int sum = 0;
		for (char c : s)
		{
			sum += (c - '0');
		}
		cout << sum << endl;
	}
	return 0;
}