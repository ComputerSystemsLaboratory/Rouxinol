#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>


using namespace std;

int n, s[10001] = {0}, q, t[500] = {0};
int key;

int linear_search(int *s,int key,int n)
{
	int i = 0,count = 0;
	s[n] = key;

	while(1)
	{
		if (i == n)
		{
			return 0;
		}

		if (s[i] == key)
		{
			count++;
			break;
		}

		i++;
	}

	return count;

}

int main()
{
	int sum = 0;

	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &s[i]);
	}

	scanf("%d", &q);

	for(int i = 0; i < q; i++)
	{
		scanf("%d", &key);
		sum += linear_search(s,key,n);
	}

	printf("%d\n", sum);


	return 0;
}
	