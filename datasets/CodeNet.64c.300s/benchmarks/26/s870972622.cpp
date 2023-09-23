#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ll pow_1(ll m,ll n,ll mod)
{	if(n==0)return 1;
	ull res=1;
	while(n>0)
	{	if(n&1) res=res*m%mod;
		m=m*m%mod;
		n/=2;
	}
	return res;
}//非递归
int main()
{	
	int m,n;
	cin>>m>>n;
	cout<<pow_1(m,n,1e9+7)<<endl;
	return 0;
}
