#include<bits/stdc++.h>
using namespace std;
int a[100005];
long long sum1;
int k;
int A,B;
int main()
{
	int x;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		a[x]++;
		sum1+=x;
	}
	cin>>k;
	for(int i=1;i<=k;i++)
	{
		cin>>A>>B;
		a[B]+=a[A];
		sum1+=(B-A)*a[A];
		a[A]=0;
		cout<<sum1<<endl;
	}
}