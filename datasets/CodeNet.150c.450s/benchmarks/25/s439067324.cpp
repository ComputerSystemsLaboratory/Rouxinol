#include <iostream>
#include <string>
using namespace std;

int main()
{  
	int c[30] = {};
	string str;
	while (cin >> str)
	{
		for (int i = 0; i < str.size(); i++)
		{
			if ('a' <= str[i] && str[i] <= 'z')
			{
				c[str[i] - 'a']++;
			}
			if ('A' <= str[i] && str[i] <= 'Z')
			{
				c[str[i] - 'A']++;
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		cout << char('a' + i) << " : " << c[i] << endl;
	}
	return 0;
}