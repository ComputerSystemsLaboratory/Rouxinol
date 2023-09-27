#include <cstdio>           // printf(), scanf(), getc()
#include <cctype>           // isdigit()
#include <algorithm>        // lower_bound()

using namespace std;
static const int MAX_N = 100000;

int A[MAX_N + 1];
int L[MAX_N];
int n;

int
lis()
{
	L[0] = A[0];
	int length = 1;
	for (int i = 1; i < n; ++i)
	{
		if (L[length - 1] < A[i])
			L[length++] = A[i];
		else
			*lower_bound(L, L + length, A[i]) = A[i];
	}

	return length;
}

int
main(int argc, char** argv)
{
	int x;
	int c;

	scanf("%d", &n);
	c = getc(stdin);
	for (int i = 0; i < n; ++i)
	{
		while (c == ' ' || c == '\n')
			c = getc(stdin);

		x = 0;
		while (isdigit(c))
		{
			x = x * 10 + c - '0';
			c = getc(stdin);
		}

		A[i] = x;
	}

	printf("%d\n", lis());
	return 0;
}