#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;

	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(int i=k;i<n;i++)
	{
		if(arr[i-k]<arr[i])
			cout<<"Yes"<<"\n";

		else
			cout<<"No"<<"\n";
	}
	return 0;
}