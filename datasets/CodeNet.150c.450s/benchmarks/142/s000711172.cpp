#include <iostream>
using namespace std;
int main()
{
	int N,K;
	cin>>N>>K;
	int i,j,k;
	long long int A[N];
	for(i=0;i<N;i++)
	{
		cin>>A[i];
	}
	for(i=K;i<N;i++)
	{
		if(A[i]>A[i-K])
		cout<<"Yes\n";
		else
		cout<<"No\n";
	}
	return 0;
}