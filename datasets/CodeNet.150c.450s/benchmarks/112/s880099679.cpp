#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n;
	while (cin >> n, n)
	{
		map<char, char> table;
		for (int i = 0; i < n; i++)
		{
			char a, b;
			cin >> a >> b;
			table[a] = b;
		}
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			char c;
			cin >> c;
			if (table.count(c)) cout << table[c];
			else cout << c;
		}
		cout << endl;
	}
	return 0;
}