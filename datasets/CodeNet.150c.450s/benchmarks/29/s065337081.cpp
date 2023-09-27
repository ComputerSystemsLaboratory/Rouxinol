#include <cstdio>           // scanf()
#include <iostream>         // cout, cerr, endl
#include <list>

using namespace std;
typedef list<int> List;

int
main(int argc, char** argv)
{
	List v;
	char command[15];
	int key = 0;
	int n = 0;
	int i;

	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		scanf("%s", command);
		switch (command[0])
		{
		case 'i':
			scanf("%d", &key);
			v.push_front(key);
			break;

		case 'd':
			if (command[6] == 'F')
				v.pop_front();

			else if (command[6] == 'L')
				v.pop_back();

			else
			{
				scanf("%d", &key);
				for (List::iterator it = v.begin(); it != v.end(); ++it)
				{
					if (*it == key)
					{
						v.erase(it);
						break;
					}
				}
			}

			break;
		}
	}

	const char* sep = "";
	for (List::iterator it = v.begin(); it != v.end(); ++it)
	{
		printf("%s%d", sep, *it);
		sep = " ";
	}

	printf("\n");
	return 0;
}