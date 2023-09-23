#include<iostream>
#include<algorithm>
using namespace std;
int counter=0;
void selectionsort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
	int minnj=i;
	for(int j=i+1;j<n;j++)
	if(a[j]<a[minnj])
	{
		minnj=j;
	}
	if(minnj!=i)
	{
	swap(a[i],a[minnj]);counter++;
    }
    }
	return ;
}
int main()
{
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	selectionsort(a,n);
	for(int i=0;i<n;i++)
	if(i!=n-1)
	cout<<a[i]<<" ";
	else
	cout<<a[i]<<endl;
	cout<<counter<<endl;
	return 0;
}
