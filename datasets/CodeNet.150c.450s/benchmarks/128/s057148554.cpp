#include <iostream>
#include <string>
using namespace std;

void test();
string ReverseStr(string str);

int main(void)
{
	test();
	return 0;
}

void test()
{
	string s;

	cin >> s;

	s = ReverseStr(s);

	cout << s << endl;
}

string ReverseStr(string str)
{
	string s;
	int i, t;
	s = str;

	for (i = 0,t = str.size() - 1; i < str.size(); i++, t--)
	{
		str[i] = s[t];
	}

	return str;
}