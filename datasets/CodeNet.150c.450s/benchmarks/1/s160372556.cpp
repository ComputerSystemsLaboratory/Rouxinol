#include<iostream>
#include<algorithm>
using namespace std;
int lis(int A[],int n)
{
	int*L=new int[n+1];
	L[0]=A[0];
	int length=1;
	
	for(int i=1;i<n;i++)
	{
		if(L[length-1]<A[i])L[length++]=A[i];
		else *lower_bound(L,L+length,A[i])=A[i];
	}
	
	return length;
}

int main()
{
	int n;cin>>n;
	int *A=new int[n];
	for(int i=0;i<n;i++)cin>>A[i];
	cout<<lis(A,n)<<endl;
	return 0;
}