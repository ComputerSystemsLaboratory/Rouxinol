#include<iostream>
using namespace std;

int main()
{
	int n,j,i,s;
	cin>>n;
	int * a=new int[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	
	for(i=0;(n/2)>i;i++)
	{
		s=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=s;
		}
	for(i=0;i<n;i++){
		cout<<a[i];
		if(i!=n-1)
			cout<<" ";
		}
		cout<<endl;
	
	delete[] a;
	
	return 0;
}