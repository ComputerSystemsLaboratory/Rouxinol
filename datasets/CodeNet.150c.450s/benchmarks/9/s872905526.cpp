#include <iostream>
#include <string>

using namespace std;

string shuffle(string s, int h)
{
	string bottom, top;
	bottom = s.substr(0, h);
	top = s.substr(h);
	return top + bottom;
}

int main()
{
	string s;
	string res[11];
	int m, h;
	int count = 0;
	while (cin >> s, s != "-")
	{
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> h;
			s = shuffle(s, h);
		}
		res[count++] = s;
	}
	for (int i = 0; i < count; i++)
	{
		cout << res[i] << endl;
	}
}
