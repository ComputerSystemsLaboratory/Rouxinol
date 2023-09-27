


#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include <functional>

using namespace std;

int INF = 10000000;

int n , p;

int k[50];


int main()
{

	while(cin >> n >> p && n && p)
	{
		
		memset(k,0,50*sizeof(int));
		int turn = 0;
		int pmax = p;

		while(1)
		{
			if(p > 0)
			{
				k[turn]++;p--;
				if(k[turn] == pmax)break;

			}else
			{
				p = k[turn];
				k[turn] = 0;
			}

			turn++;
			turn = turn % n;
		}

		cout << turn << endl;
	}

  return 0;
}