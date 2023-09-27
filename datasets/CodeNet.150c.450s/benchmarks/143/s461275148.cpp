#include <bits/stdc++.h>
using namespace std;
int main()
{
 long int n,q,s=0;
	cin>>n;
   long	int arr[n],a[100001]={0};
	for(int i=0;i<n;i++){
	cin>>arr[i];
	s=s+arr[i];
	a[arr[i]]++;
	  }
	cin>>q;
	int b[q],c[q];
	for(int i=0;i<q;i++)
	{
		cin>>b[i]>>c[i];
		int sum=a[b[i]];
		s=s+sum*(c[i]-b[i]);
		a[c[i]]=a[c[i]]+sum;
		a[b[i]]=0;
		cout<<s<<endl;	
	}	
}
