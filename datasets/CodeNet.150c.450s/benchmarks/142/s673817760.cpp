#include <bits/stdc++.h>
using namespace std;
int main()
{
 long int n,s=1,k;
	cin>>n>>k;
   long long int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	for(int i=k;i<n;i++)
	{
	    if(arr[i]>arr[i-k])
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	
}
