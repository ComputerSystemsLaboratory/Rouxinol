#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string str, cmd, repStr;
	int q, from, to;
	cin >> str >> q;
	for (int i = 0; i < q; ++i)
	{
		cin >> cmd >> from >> to;
		if(cmd.compare("print") == 0)
			cout << str.substr(from, to - from + 1) << endl;
		else if(cmd.compare("reverse") == 0)
		{
			string revStr = "";
			for (int j = from; j <= to; ++j)
			{
				revStr.insert(0, str.substr(j, 1));
			}
			str.replace(from, to - from + 1, revStr);
		}
		else if(cmd.compare("replace") == 0)
		{
			cin >> repStr;
			str.replace(from, to - from + 1, repStr);
		}
	}
	return 0;
}