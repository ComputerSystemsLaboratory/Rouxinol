#include <iostream>
using namespace std;
int main()
{
	while(1)
	{
		int n,k; cin >> n >> k ;
		if(n==0 && k==0) break;
		int* a=new int[n]; int sum=0; int max=0;
		for(int i=0;i<n;i++) cin >> a[i] ;
		for(int i=0;i<k;i++) sum+=a[i];
		max=sum;
		for(int i=k;i<n;i++)
		{
			sum=sum+a[i]-a[i-k];
			if(sum>max) max=sum;
		}
		cout << max << '\n';
	}
}