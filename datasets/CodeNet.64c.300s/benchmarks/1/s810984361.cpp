#include<iostream>
using namespace std;
int a[100000];
int partitin(int n,int r)
{
	int x;
	int i;
	int t;
	x=a[r];
	i=n-1;
	for(int j=n;j<r;j++)
	{
		if(a[j]<=x)
	{	i++;
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		}
	}
	t=a[i+1];a[i+1]=a[r];a[r]=t;
	return i+1;
}
int main()
{
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	m=partitin(0,n-1);
	for(int i=0;i<n;i++)
	{
	    if(i) cout<<" ";
		if(i==m) cout<<"[";
		cout<<a[i];
		if(i==m) cout<<"]";
    }
    cout<<endl;
    return 0;
}