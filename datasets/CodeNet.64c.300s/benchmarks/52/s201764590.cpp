#include<iostream>

using namespace std;

void conv(int n, int a[10])
{
	for(int i=0;i<10;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
}

int main(void)
{
	int n,s;
	while(cin>>n>>s)
	{
		if(n==0&&s==0)
		{
			break;
		}
		int x,y,z[10],ans;
		ans=0;
		for(int i=0;i<1024;i++)
		{
			x=y=0;
			conv(i,z);
			for(int j=0;j<10;j++)
			{
				if(z[j]==1)
				{
					x++;
					y+=j;
				}
			}
			if(x==n&&y==s)
			{
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}