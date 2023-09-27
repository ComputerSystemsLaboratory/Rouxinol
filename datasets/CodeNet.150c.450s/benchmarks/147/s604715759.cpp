#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		int ans=0;
		for (int x=1;x*x<=i;x++)
		{
			for (int y=x;y*y<=i;y++)
			{
				for (int z=y;z*z<=i;z++)
				{
					if (x*x+y*y+z*z+x*y+y*z+z*x==i)
					{
						if (x!=y&&x!=z&&y!=z)ans+=6;
						else if (x!=y&&x!=z&&y==z||x!=y&&y!=z&&x==z||x!=z&&y!=z&&x==y)ans+=3;
						else ans++;
					}
				}
			}
		}
		cout<<ans<<"\n";
	}
}