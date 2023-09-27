#include <cstdio>
#include <utility>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#define REP(i,n) for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
typedef vector<ll> vl;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef vector<string> vs;

int main() 
{
	int n,m;
	
	while(cin >> n >> m && n!=0 && m!=0)
	{
		int men = n*n + m*m;
		int min(0),max(0);
		for(int i=n+1;i<men;i++)
		{
			for(int j=i+1;j<men;j++)
			{
				if(i*i+j*j==men){min=i;max=j;break;}
			}
			if(min!=0 && max!=0){break;}
		}
		
		if(min!=0 && max!=0){cout << min << " " << max << endl;}
		else
		{
			for(int i=men+1;i<22501;i++)
			{
				for(int j=1;j<151;j++)
				{
					for(int k=j+1;k<151;k++)
					{
						if(j*j+k*k == i){min=j;max=k;break;}
					}
				if(min!=0 && max!=0){break;}
				}
			if(min!=0 && max!=0){break;}
			}
			cout << min << " " << max << endl;
		}
	}
	return 0 ;
}