// code for nothing 
// live for nothing 
// die for nothing
// nothing is everything
# include <iostream>
using namespace std;
int main()
{
	unsigned int M = 1000000007; 
	long long n,k,s,p;
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		s=a[0];
	}
	for(int i=0; i<n-k; i++)
	{
		if(a[i+k]>s)
		{
			s=a[i+1];
			cout<<"Yes"<<endl;
		}
		else
		{
			s=a[i+1];
			cout<<"No"<<endl;
		}
	}
}
