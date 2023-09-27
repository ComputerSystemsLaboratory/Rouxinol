#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin >> n, n)
	{
		int ans=0;
		for(int i=1; i<=1000; i++)
		{
			int a=i;
			for(int j=i+1; j<=1000; j++)
			{
				a+=j;
				if(a==n)
				{
					ans++;
				}
			}
		}
		
		cout << ans << endl;
	}

}