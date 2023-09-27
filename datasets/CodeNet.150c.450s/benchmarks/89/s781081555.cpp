#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> prime;
	int i,j;
	for(i=0;i<1000000;i++)
	{
		prime.push_back(1);
	}
	prime[0]=prime[1]=0;
	for(i=0;i<1000000;i++)
	{
		if(prime[i]==1)
		{
			for(j=2;j*i<1000000;j++)
			{
				prime[i*j]=0;
			}
		}
	}
	
	int a,b,n;
	
	for(;;)
	{
		cin >> a >> b >> n ;
		if(a==0 && b==0 && n==0)
			break;
		
		int count=0;
		
		for(;;a+=b)
		{
			if(prime[a]==1)
				count++;
			if(count==n)
				break;
		}
		cout << a << endl;
	}
}