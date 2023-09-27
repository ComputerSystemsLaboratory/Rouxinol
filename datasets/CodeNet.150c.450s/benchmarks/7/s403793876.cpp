#include <cstdlib>
#include <cstdio>
#include <algorithm>
using namespace std;

int gunung[10];

int main()
{
	for(int a=0;a<10;a++)
	{
		scanf("%d",&gunung[a]);
	}
	sort(gunung,gunung+10);
	for(int a=9;a>6;a--)
	{
		printf("%d\n",gunung[a]);
	}
	return 0;
}