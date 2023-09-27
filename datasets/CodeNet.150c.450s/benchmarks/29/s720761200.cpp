#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	string com;
	list<int> v;

	cin >> N;

	for (int i = 0;i < N;i++)
	{
		int key;
		cin >> com;

		if (com == "insert")
		{
			cin >> key;
			v.push_front(key);
		}
		else if (com == "delete")
		{
			cin >> key;
			for (auto it = v.begin(); it != v.end();it++)
			{
				if (*it == key)
				{
					v.erase(it);
					break;
				}
			}
		}
		else if (com == "deleteFirst")
			v.pop_front();
		else if (com == "deleteLast")
			v.pop_back();
	}

	int i = 0;
	for(auto it : v)
	{
		if (i > 0)
			cout << " ";
		cout << it;

		i++;
	}
	cout << endl;

	return 0;
}