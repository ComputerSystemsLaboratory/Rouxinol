#include <algorithm>
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	list<int> l;
	string s;
	int x;
	while (n--)
	{
		cin >> s;
		if (s == "deleteFirst") { l.pop_front(); continue; }
		else if (s == "deleteLast") { l.pop_back(); continue; }

		cin >> x;
		if (s == "insert") l.push_front(x);
		else if (s == "delete")
		{
			list<int>::iterator it = find(l.begin(), l.end(), x);
			if (it != l.end())
				l.erase(it);
		}
	}

	cout << l.front(), l.pop_front();
	for (auto it = l.begin(); it != l.end(); ++it)
		cout << " " << *it;
	cout << endl;

	return 0;
}