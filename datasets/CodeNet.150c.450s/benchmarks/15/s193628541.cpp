#include <stdio.h>
int s[10005], t[500];
int main(int argc, char const *argv[])
{
	int c = 0;
	int n,q;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&s[i]);
	}
	scanf("%d",&q);
	for (int i = 0; i < q; ++i)
	{
		scanf("%d",&t[i]);
	}
	int j = 0;
	for (int i = 0; i < q; ++i)
	{
		s[n] = t[i];
		j = 0;
		while(s[j] != s[n])
		{
			j++;
		}
		if(j!=n) c++;
	}
	printf("%d\n", c);
	return 0;
}