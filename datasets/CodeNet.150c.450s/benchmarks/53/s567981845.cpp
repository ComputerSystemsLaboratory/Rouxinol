#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <list>
#include <utility>
#include <cmath>
#include <sstream>
#include <map>
#define F first
#define S second
#define FOR(i,n) for(int i=0;i<(int)n;i++)
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define FORI(i,k,n) for(int i=k;i<(int)n;i++)
#define repp(i,k,n) for(int i=k;i<(int)n;i++)
using namespace std;
typedef pair<double, double> pdd;
typedef pair<int, int> pii;
typedef pair< int , pair<int, int> > pip;
typedef unsigned long long ull;
const double EPS = 10e-6;
bool flg[1000005]={};

int main()
{

	int n,ori;
	cin>>n;
	ori=n;
	cout<<n<<":";
	for(int i=2;i<=1000005;i++)
	{
		if(flg[i])
		{
			;
		}
		else
		{
			for(int l=i;l<=1000005;l+=i)
			{
				flg[l]=true;
			}
		}
	}
	while(1)
	{
		if(n==1)
		{
				cout<<endl;
				break;
		}
		for(int i=2;i<=1000005;i++)
		{
			if(n%i==0)
			{
				cout<<" "<<i;
				n/=i;
				break;
			}
		}
		if(n==ori)
		{
			cout<<" "<<ori<<endl;
			break;
		}
	}
}