#include<stdio.h>
int main() {
 
	long long int n, k;
	scanf("%lld", &n);
	scanf("%lld", &k);
 
	long long int a[200000];
	for (long long int i = 0;i < n;i++)
	{
		scanf("%lld", &a[i]);
	}
	for (long long int j = 0;j < n - k;j++)
	{
		if (a[k + j] > a[j])
		{
			printf("Yes\n");
		}
		else
			printf("No\n");
	}
 
	return 0;
}