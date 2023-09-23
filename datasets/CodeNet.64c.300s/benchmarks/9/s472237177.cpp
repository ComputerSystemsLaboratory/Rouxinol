#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;



int main()
{
	int sum = 100000;
	int tmp;
	int n;

	scanf("%d",& n);

	for (int i = 0; i < n; i++) {
		sum += sum / 20;
		tmp = sum;
		sum -= sum % 1000;
		if (tmp != sum) sum += 1000;
	}
	printf("%d\n", sum);

	return (0);
	
}