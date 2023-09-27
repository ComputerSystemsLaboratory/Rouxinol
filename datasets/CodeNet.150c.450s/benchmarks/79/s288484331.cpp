#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include <functional>

using namespace std;

int INF = 10000000;

int n , r;
int N[50];


int main()
{

	while(cin >> n >> r && n && r)
	{

		for(int i = 0;i < n;i++)N[i] = n-i-1;

		for(int i = 0;i < r;i++)
		{
			int p,c;
			cin >> p >> c;p--;

			int temp[50];
			int t = 0;

			for(int j = p;j < p+c;j++)
			{
				temp[t++] = N[j];
			}
			t = p-1;

			for(int j = p+c-1;j >= 0;j--)
			{
				if(t>=0)N[j] = N[t--];
			}

			for(int j = 0;j < c;j++)
			{
				N[j] = temp[j];
			}
		}

		cout << N[0]+1 << endl;



	}

  return 0;
}