#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int A[50];
	A[0] = 1;
	A[1] = 1;
	for (int i = 2; i < 50; i++)
		A[i] = A[i - 1] + A[i - 2];
	int N;
	scanf("%d", &N);
	printf("%d\n", A[N]);

	return 0;
}