#include <iostream>
using namespace std;
void countingsort(int A[],int n,int maxs)//maxsize
{
	int *B=new int[n];
	int *C=new int[++maxs];
	int i;
	for(i=0;i<maxs;i++)C[i]=0;
	for(i=0;i<n;i++)
	{
		C[A[i]]++;
		B[i]=A[i];
	}
	for(i=1;i<maxs;i++)C[i]+=C[i-1];
	for(i=n;i--;)
	{
		C[B[i]]--;
		A[C[B[i]]]=B[i];
	}
	return;
}

int main() {
	const int maxs=10000;
	int n;cin>>n;
	int *A=new int[n];
	for(int i=0;i<n;i++)cin>>A[i];
	countingsort(A,n,maxs);
	for(int i=0;i<n;i++)
	{
		if(i)cout<<" ";
		cout<<A[i];
	}
	cout<<endl;
	return 0;
}