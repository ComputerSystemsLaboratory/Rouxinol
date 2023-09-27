


#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include <functional>

using namespace std;

int INF = 10000000;

int n;



int cast(int y,int m,int d)
{
	int sum = 0;

	for(int i = 999;i > 0;i--)
	{
		for(int j = 10;j > 0;j--)
		{
			for(int k = j%2 || i % 3 == 0 ? 20 : 19 ;k > 0;k--)
			{
				sum++;
				if(i == y && j == m && d == k)
				{
					return sum;
				}
			}
		}
	}


}


int main()
{
	cin >> n;

	for(int i = 0;i < n;i++)
	{

		int y,m,d;

		cin >> y >> m >> d;


		cout << cast(y,m,d) << endl;

	}

  return 0;
}