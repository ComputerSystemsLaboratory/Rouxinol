#include <list>
#include <cstdio>
#include <string>
#include <iostream>

#pragma warning(disable: 4996)

using namespace std;

int main()
{
	int n, v;

	string c;

	list<int> l;

	scanf("%d", &n);

	for (int i = 0; i < n;)
	{
		cin >> c;

		if (c[0] == 'i')
		{
			scanf("%d", &v);

			l.push_front(v);
		}
		else if (c.size() == 11)
		{
			l.pop_front();
		}
		else if (c.size() == 10)
		{
			l.pop_back();
		}
		else
		{
			scanf("%d", &v);

			list<int>::iterator it = l.begin();

			while (it != l.end())
			{
				if (*it == v)
				{
					l.erase(it); break;
				}

				it++;
			}
		}

		i++;
	}

	list<int>::iterator it = l.begin();

	while (it != l.end())
	{
		if (it == l.begin())
		{
			printf("%d", *it);
		}
		else
		{
			printf(" %d", *it);
		}

		it++;
	}

	printf("\n");

	return 0;
}