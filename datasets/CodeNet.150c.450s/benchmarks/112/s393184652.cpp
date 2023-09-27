#include<cstdio>
#include<list>
#include<algorithm>

using namespace std;

int n,m;

int main()
{
	while(true)
	{
		list<char> map_1;
		list<char> map_2;
		list<char>::iterator map;
		list<char>::iterator map2;
		scanf("%d",&n);
		if(n==0)break;
		for(int i=0;i<n;i++)
		{
			char a,b;
			scanf(" %c %c",&a,&b);
			map_1.push_back(a);
			map_2.push_back(b);
		}
		scanf("%d",&m);
		for(int i=0;i<m;i++)
		{
			char c;
			scanf(" %c",&c);
			if(find(map_1.begin(),map_1.end(),c)==map_1.end())
				printf("%c",c);
			else
			{
				map=map_1.begin();
				map2=map_2.begin();
				while(true)
				{
					if(*map==c)break;
					map++;
					map2++;
				}
				printf("%c",*map2);
			}
		}
		printf("\n");
	}
	return 0;
}