#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,i;
	cin>>n>>k;
	long long int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=k;i<n;i++)
	{
		if(arr[i-k]<arr[i])
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
}