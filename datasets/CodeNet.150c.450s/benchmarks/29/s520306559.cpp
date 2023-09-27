#include<cstdio>
#include<list>
#include<cstring>

using namespace std;

const int MAX = 20;

list<int> l;

int main()
{
	int n;
	while(~scanf("%d", &n))
	{
		while(n--)
		{
			char s[MAX];
			scanf("%s", s);
			if(!strcmp(s, "insert"))
			{
				int tmpnum;
				scanf("%d", &tmpnum);
				l.push_back(tmpnum);
			}
			else if(!strcmp(s, "delete"))
			{
				int tmpnum;
				scanf("%d", &tmpnum);
				int len = l.size();
				list<int>::iterator iter = l.end();
				iter--;
				for(;len >= 1; iter--, len--)
				{
					if((*iter) == tmpnum)
					{
						l.erase(iter);
						break;
					}
				}
			}
			else if(!strcmp(s, "deleteFirst"))
			{
				list<int>::iterator it = l.end();
				it--;
				l.erase(it);
			}
			else
			{
				list<int>::iterator it = l.begin();
				l.erase(it);
			}
		}
		int len = l.size();
		for(list<int>::reverse_iterator it = l.rbegin(); it != l.rend(); it++, len--)
		{
			printf("%d", *it);
			if(len == 1)
				printf("\n");
			else
				printf(" ");
		}
	}
	return 0;
}

