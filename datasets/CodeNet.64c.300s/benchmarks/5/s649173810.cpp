
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%lld", &arr[i]);
	}
	int temp;
	for (int i = 0; i < 10; i++)
	{
		for (int j = i+1; j < 10; j++)
		{
			if(arr[i]<arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%lld\n", arr[i]);
	}
	cin.get();
	return 0;
}