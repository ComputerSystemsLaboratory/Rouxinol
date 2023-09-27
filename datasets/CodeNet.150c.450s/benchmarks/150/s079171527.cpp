#include <bits/stdc++.h>

using namespace std;

const int maxn = 30009;

int data[maxn];

int main()
{
	int n, tmp;
	memset(data, 0, sizeof(data));
	scanf("%d", &n);
	for(int i = 1; i <= n; i ++)
	{
		scanf("%d", &tmp);
		data[tmp] ++;
	}
	bool iss = false;
	for(int i = 0; i <= 10000; i ++)
	{
		while(data[i])
		{
			if(iss)printf(" ");
			else iss = true;
			printf("%d", i);
			data[i] --;
		}
	}
	printf("\n");
	return 0;
}
