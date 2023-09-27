#include <iostream>
#include <algorithm>
#include <cstdio>
#include <list>
using namespace std;


int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	char op[20];
	int x, n;
	list<int> List;
	cin >> n;
	while (n--)
	{
		scanf("%s", op);
		if (op[0] == 'i')
		{
			cin >> x;
			List.push_front(x);
		}
		else if (op[6] == 'F')
			List.pop_front();
		else if (op[6] == 'L')
			List.pop_back();
		else
		{
			cin >> x;
			for (list<int>::iterator it = List.begin(); it != List.end(); ++it)
				if (*it == x)
				{
					List.erase(it);
					break;
				}
		}

	}
	bool flag = false;
	for (list<int>::iterator it = List.begin(); it != List.end(); ++it)
	{
		if (flag)
			cout << ' ';
		cout << *it;
		flag = true;
	}
	cout << endl;
	return 0;
}