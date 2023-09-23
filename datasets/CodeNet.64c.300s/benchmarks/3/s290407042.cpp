#include <cstdio>
//#include <iostream>
//#include <string>

using namespace std;

// cl /EHsc xxx.cpp
int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	
	int *ary = new int[n];
	
	int v;
	int t = n;
	while (t)
	{
		scanf("%d", &v);
		ary[--t] = v;
	}
	
	for (int j = 0; j < n; j++)
	{
		if (j == n-1)
		{
			printf("%d", ary[j]);
		}
		else
		{
			printf("%d ", ary[j]);
		}
		
	}
	printf("\n");
	
	delete[] ary;
	
	return 0;
}