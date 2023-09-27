#include <iostream>
#include <string>
using namespace std;
int main()
{
	string arg;

	while (1)
	{
		string tmp;

		getline(cin, tmp);
		arg += tmp;

		if (cin.eof()) { break; }
	}

	
	for (int i2(0), n2(arg.length()); i2 < n2; ++i2)
	{
		if('A' <= arg[i2] && arg[i2] <= 'Z') { arg[i2] = arg[i2] - 'A' + 'a'; } 
	}
		
	for (char i('a'); i <= ('z'); ++i)
	{
		int tmp(0);
		
		for (int i2(0), n2(arg.length()); i2 < n2; ++i2)
		{
			if (arg[i2] == i) { tmp++; }
		}
		
		cout << i << " : " << tmp << endl; 
	}
	
	return 0;
}