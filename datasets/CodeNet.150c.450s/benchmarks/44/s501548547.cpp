#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string.h>
#include <bitset>
#include <queue>
#include <map>
#include <string>
#include <stack>
#include <utility>
#include <queue>
#include <cmath>
#define mp make_pair
#define pii pair<long long int,long long int> 
#define ff first
#define pb push_back
#define ss second
#define ll long long 
#define ull unsigned long long
#define vi vector<long long int>
#define vii vector<pii>
#define vvi vector <vi>
#define rep(x,a,b,c) for(int x=a;x<=b;x+=c)
#define repp(x,a,b) rep(x,a,b,1)
#define rev(x,a,b,c) for(int x=a;x>=b;x-=c)
#define revv(x,a,b) rev(x,a,b,1)
#define OO (int)2e9
#define INF (ll)1e18
 
using namespace std;

int a[5],b[5];
int hit,blow;

int main()
{
	while(scanf("%d %d %d %d",&a[1],&a[2],&a[3],&a[4])!=EOF)
	{
		hit=0;
		blow=0;
		scanf("%d %d %d %d",&b[1],&b[2],&b[3],&b[4]);
		repp(x,1,4)
		{
			repp(y,1,4)
			{
				if(b[x]==a[y])
				{
					if(x==y)hit++;
					else
					blow++;
				}
			}
		}
		printf("%d %d\n",hit,blow);
	}
	return 0;
}