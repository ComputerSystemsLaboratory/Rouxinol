#include <iostream>
#include <string>

using namespace std;

int main()
{
	string		W;
	int			Cnt = 0;

	auto ToUpper = [](string &st)
	{
		for (auto &it : st)
		{
			it = toupper(it);
		}
	};

	getline(cin, W);
	ToUpper(W);

	string	str;
	for (;;)
	{

		cin >> str;
		if (str == "END_OF_TEXT")	break;

		ToUpper(str);
		if (str == W)	Cnt++;
	}

	cout << Cnt << endl;

	return 0;
}