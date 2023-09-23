#include <iostream>
#include <string>
using namespace std;

int main()
{
	string		line;
	getline(cin, line);

	for (auto &it : line)
	{
		if (('a' <= it) && (it <= 'z'))
		{
			it = toupper(it);
		}
		else if (('A' <= it) && (it <= 'Z'))
		{
			it = tolower(it);
		}
	}

	cout << line << "\n";

	return 0;
}