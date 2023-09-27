


#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include <functional>

using namespace std;

int INF = 10000000;

int n,m;

int t[100];
int h[100];

int main()
{

	while(cin >> n >> m && n && m)
	{
		int tmax = 0;
		int hmax = 0;

		for(int i = 0;i < n;i++)
		{
			cin >> t[i];
			tmax += t[i];
		}
		for(int i = 0;i < m;i++)
		{
			cin >> h[i];
			hmax += h[i];
		}


		int Min = INF;
		int mh = -1;
		int mt = -1;

		for(int i = 0;i < n;i++)
		{
			for(int j = 0;j < m;j++)
			{
				if(hmax + t[i] - h[j] == tmax + h[j] - t[i])
				{
					if(Min > h[j] + t[i])
					{
						mh = h[j];mt = t[i];
						Min = h[j] + t[i];
					}
				}
			}
		}

		if(mt == -1 ) cout << -1 << endl;
		else cout << mt << " " << mh << endl;

	}

  return 0;
}