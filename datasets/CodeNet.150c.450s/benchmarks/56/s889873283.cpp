#include<iostream>
#include<stdio.h>

int main()
{
	int a[10000];
	int n;
	int max = -20000000;
	int min = 20000000;
	long long int sum = 0;
	std::cin >> n;
	int i;
	for (i = 0; i < n; i++){
		std::cin >> a[i];
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
		sum += a[i];
	}
	printf("%d %d %lld\n", min, max, sum);
	return 0;
}