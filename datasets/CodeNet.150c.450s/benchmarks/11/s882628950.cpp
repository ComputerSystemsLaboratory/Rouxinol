#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	enum suit
	{
		S,
		H,
		C,
		D,
	};
	map<pair<suit, int>, bool> c;
	for (int i = 0; i < 4; i++)
		for (int j = 1; j <= 13; j++)
			c[make_pair((suit)i, j)] = 1;
	for (int i = 0; i < n; i++)
	{
		suit s;
		char ch;
		int j;
		cin >> ch >> j;
		switch (ch)
		{
		case 'S':
			s = S;
			break;
		case 'H':
			s = H;
			break;
		case 'C':
			s = C;
			break;
		case 'D':
			s = D;
			break;
		}
		c[make_pair(s, j)] = 0;
	}
	for (auto x : c)
	{
		if (x.second)
		{
			switch (x.first.first)
			{
			case S:
				cout << 'S';
				break;
			case H:
				cout << 'H';
				break;
			case C:
				cout << 'C';
				break;
			case D:
				cout << 'D';
				break;
			}
			cout << ' ' << x.first.second << endl;
		}
	}
}
