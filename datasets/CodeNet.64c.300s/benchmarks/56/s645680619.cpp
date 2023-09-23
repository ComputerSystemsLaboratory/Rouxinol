#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <stack>

#define rep(i,x) for(int i=0;i<x;i++)
#define rrep(i,x) for(int i=x-1;i>=0;i--)
#define rep_to(a,i,x) for(int i=a;i<x;i++)

using namespace std;

int main()
{
	int n;
	int y,m,d;
	
	cin >> n;
	
	rep(i,n)
	{
		int pre_day=196471;
		int day=0;

		cin >> y >> m >> d;

		for(int i=1;i<y;i++)
		{
			if(i%3==0)day+=200;
			else day+=195;
		}
		for(int i=1;i<m;i++)
		{
			if(y%3!=0)
			{
				if(i%2!=0)day+=20;
				else day+=19;	
			}
			else day+=20;
		}
		day+=d;

		cout << pre_day-day << endl;
	}

	return 0;
}