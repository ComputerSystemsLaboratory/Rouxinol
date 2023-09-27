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

int w[1510];
int h[1510];

int wf[1510 * 1000];
int hf[1510 * 1000];



int main()
{

	while(1)
	{
		memset(wf,0,1510*1000 * sizeof(int));
		memset(hf,0,1510*1000 * sizeof(int));

		cin >> n >> m;

		if(!n && !m)break;


		for(int i = 0;i < n;i++)
		{
			cin >> w[i];
		}
		for(int i = 0;i < m;i++)
		{
			cin >> h[i];
		}



		for(int i = 0;i < n;i++)
		{
			int sum = 0;
			for(int j = i;j < n;j++)
			{
				sum += w[j];
				wf[sum]++;
			}
		}

		for(int i = 0;i < m;i++)
		{
			int sum = 0;
			for(int j = i;j < m;j++)
			{
				sum += h[j];
				hf[sum]++;
			}
		}

		int sum = 0;

		for(int i = 0;i < 1510*1000;i++)
		{
			sum += wf[i] * hf[i];
		}
	
		cout << sum << endl;
	}

  return 0;
}