#include<iostream>
using namespace std;
int A[100];
int main()
{
	int i,n;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>A[i];
	for(i=n-1;i>0;i--)
		cout<<A[i]<<" ";
	cout<<A[0]<<endl;
	return 0;
}
