#include<iostream>
#include<cstdio>
using namespace std;

int parent(int num)
{
	return num / 2;
}
int left(int num)
{
	return num * 2;
}
int right(int num)
{
	return num * 2 + 1;
}
int main()
{
	int A[100000];
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		scanf("%d", &A[i]);
	for (int i = 1; i <= N; i++) {
		printf("node %d: key = %d, ", i, A[i]);
		if (parent(i) > 0)printf("parent key = %d, ", A[parent(i)]);
		if (left(i) <= N)printf("left key = %d, ", A[left(i)]);
		if (right(i) <= N)printf("right key = %d, ", A[right(i)]);
		printf("\n");
	}
	return 0;
}