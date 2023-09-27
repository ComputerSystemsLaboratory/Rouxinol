#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	char temp;
	int i, len;
	while (cin >> s)
	{
		len = s.length();
		for (i = 0; i < len / 2; i++)
		{
			temp = s[i];
			s[i] = s[len - 1 - i];
			s[len - 1 - i] = temp;
		}
		cout << s << endl;
	}
	return 0;
}