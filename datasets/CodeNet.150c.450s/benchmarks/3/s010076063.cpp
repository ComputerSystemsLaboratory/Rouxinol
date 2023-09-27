#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string reverse(string s, int a, int b)
{
	string sub = s.substr(a, b - a + 1);
	reverse(sub.begin(), sub.end());
	s.replace(a, b - a + 1, sub);
	return s;
}

int main()
{
	string str;
	int q;
	string cmd;
	int a, b;
	string p;
	vector<string> print(101, "\0");
	cin >> str >> q;
	int count = 0;
	for (int i = 0; i < q; i++)
	{
		cin >> cmd;
		if (cmd == "print")
		{
			cin >> a >> b;
			print[count++] = str.substr(a, b - a + 1);
		}
		else if (cmd == "reverse")
		{
			cin >> a >> b;
			str = reverse(str, a, b);
		}
		else if (cmd == "replace")
		{
			cin >> a >> b >> p;
			str.replace(a, b - a + 1, p);
		}
	}
	for (int i = 0; print[i] != "\0"; i++)
	{
		cout << print[i] << endl;
	}
}
