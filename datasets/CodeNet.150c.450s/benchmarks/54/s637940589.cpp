#include <iostream>
#include <string>
using namespace std;
int main()
{
	int result(0);
	string arg;
	cin >> arg;
	
	for (int i2(0), n2(arg.length()); i2 < n2; ++i2)
	{
		if ('A' <= arg[i2] && arg[i2] <= 'Z') { arg[i2] = arg[i2] - 'A' + 'a'; }
	}

	while(1)
	{
		string tmp;
		cin >> tmp;
		
		if (tmp == "END_OF_TEXT")
		{
			cout << result << endl;
			return 0;
		}

		for (int i2(0), n2(tmp.length()); i2 < n2; ++i2)
		{
			if ('A' <= tmp[i2] && tmp[i2] <= 'Z') { tmp[i2] = tmp[i2] - 'A' + 'a'; }
		}
		
		if (tmp == arg) { ++result; }
	}
}