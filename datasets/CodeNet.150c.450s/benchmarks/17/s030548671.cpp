#include <algorithm>
#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;

int arr[5];

int main()
{
	for(int a=0;a<5;a++)
	{
		scanf("%d",&arr[a]);
	}
	sort(arr,arr+5);
	for(int a=4;a>=0;a--)
	{
		printf("%d",arr[a]);
		if(a>0)
		printf(" ");
	}
	printf("\n");
	return 0;
}