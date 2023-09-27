#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		arr[i]=0;
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			for(int k=1;k<n;k++)
			{
				int p = i*i+j*j+k*k+i*j+j*k+k*i;
				if(p>n)
					break;
				else
					arr[p-1]++;
			}
		}
	}
	for(int i=0;i<n;i++)
		printf("%d\n",arr[i]);
}