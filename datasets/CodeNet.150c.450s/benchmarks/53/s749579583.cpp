#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int isprime(int n)
{
	if(n<2)return 0;
	else for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)return 0;
	}
	return 1;
}//dfs,
void solve(int n)
{	if(isprime(n))
	{
		cout<<n<<": "<<n<<endl;//特殊情况排除
		return ;
	}
	int sum=0;
	cout<<n<<":";
	while(n>1)
	{	
		for(int i=2;i<=n;i++)
			if(isprime(i)&&(n%i==0))
				{	
					cout<<" ";//格式
					cout<<i;
					n/=i;
					sum++;
					break;
				}
	}
	cout<<endl;
}
int main()
{	
	int n;
	cin>>n;
	solve(n);
	return 0;
}
