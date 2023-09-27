#define		_CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

int main()
{
	for (;;)
	{
		string		line;
		getline(cin, line);

		if (line == "0")
			break;

		int		sum = 0;
		for (auto it : line)
		{
			sum += it - '0';
		}

		cout << sum << "\n";

	}

	return 0;
}