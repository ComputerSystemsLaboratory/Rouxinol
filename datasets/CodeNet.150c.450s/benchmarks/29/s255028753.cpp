#include <list>
#include <cstdio>

int main()
{
	int n, v;

	char c[12];

	std::list<int> l;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", c);

		if (c[0] == 'i')
		{
			scanf("%d", &v);

			l.push_front(v);
		}
		else if (c[6] == 'F')
		{
			l.pop_front();
		}
		else if (c[6] == 'L')
		{
			l.pop_back();
		}
		else
		{
			scanf("%d", &v);

			std::list<int>::iterator it = l.begin();

			std::list<int>::iterator end_it = l.end();

			while (it != end_it)
			{
				if (*it == v)
				{
					l.erase(it); break;
				}

				it++;
			}
		}
	}

	std::list<int>::iterator it = l.begin();

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