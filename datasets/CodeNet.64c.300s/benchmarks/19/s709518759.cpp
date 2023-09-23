#include <iostream>
using namespace std;

int main()
{
	int n,t,mx;
	while(cin >> n, n)
	{
		mx = -(1<<30);
		int dt[5000]={0};
		for(int i=0; i<n; i++)
		{
			cin >> t;
			for(int j=0; j<=i; j++)
			{
				dt[j]+=t;
				mx=max(mx,dt[j]);
			}
		}
		cout << mx << endl;
	}
}