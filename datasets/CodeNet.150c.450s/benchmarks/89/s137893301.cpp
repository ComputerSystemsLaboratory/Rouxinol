#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,n;

	while(cin >> a >> b >> n && n)
	{
		int count=0,flag=0;
		for(int i=a;i<=1000000;i+=b)
		{
			for(int j=2;j<=sqrt(i);j++)
			{
				if(i%j==0 && i!=j)
				{
					flag++;
					break;
				}
			}
			if(!flag && i>=2)count++;
			if(count==n)
			{
				cout << i << endl;
				break;
			}
			flag=0;
		}
	}
}