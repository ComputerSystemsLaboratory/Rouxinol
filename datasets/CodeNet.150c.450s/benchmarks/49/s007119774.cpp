#include <iostream>
#include <cstdio>
#include <cmath>
#include <stack>

#define rep(i,x) for(int i=0;i<x;i++)
#define rrep(i,x) for(int i=x-1;i>=0;i--)
#define rep_to(a,i,x) for(int i=a;i<x;i++)

using namespace std;

int kai(int n)
{
	int sum=1;
	for(int i=n;i>=1;i--)sum*=i;
	return sum;
}

int main()
{
	int n;
	while(1){
	cin>>n;
	if(n==0)break;

	int mx=0,mi=1000,sum=0;
	rep(i,n)
	{
		int s;
		cin>>s;
		mi=min(mi,s);
		mx=max(mx,s);
		sum+=s;
	}
	cout<<(sum-mi-mx)/(n-2)<<endl;
}
	return 0;
}