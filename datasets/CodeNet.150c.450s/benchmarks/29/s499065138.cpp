#include <iostream>
#include <cstdio>
#include <list>
using namespace std;

int main()
{
	int n, num;
	list<int> l;
	char s[20];
	scanf("%d", &n);
	for(int i = 0; i < n; ++ i)
	{
		scanf("%s", s);
		if(s[0] == 'i')
		{
			scanf("%d", &num);
			l.push_front(num);
		}
		else if(s[6] == 'F')
		{
			l.pop_front();
		}
		else if(s[6] == 'L')
		{
			l.pop_back();
		}
		else if(s[0] == 'd')
		{
			scanf("%d", &num);
			for(list<int>::iterator it = l.begin(); it != l.end(); it ++)
			{
				if(*it == num)
				{
					l.erase(it);
					break;
				}
			}
		}
	}
	
	int i = 0;
	for(list<int>::iterator it = l.begin(); it != l.end(); it ++)
	{
		if(i ++)	printf(" ");
		printf("%d", *it);
	}
	printf("\n");
	
	
	return 0;
}
