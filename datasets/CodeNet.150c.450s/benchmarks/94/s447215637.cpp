#include <bits/stdc++.h>

int n, r, a[100];

int main()
{
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < i; j++)
		{
			if(a[i] < a[j]) r++;
		}
	}
	
	std::sort(a, a + n);
	
	for(int i = 0; i < n; i++) { if(i) printf(" "); printf("%d", a[i]); }
	
	printf("\n%d\n", r);
	
	return 0;
}