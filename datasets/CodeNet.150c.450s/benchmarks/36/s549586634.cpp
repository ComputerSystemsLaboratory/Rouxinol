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

int n,hasil;

int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		hasil=0;
		rep(x,n,600-n,n)
		{
			hasil+=n*x*x;
		}
		printf("%d\n",hasil);
	}
	return 0;
}