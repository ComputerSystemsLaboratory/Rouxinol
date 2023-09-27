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

int n,list[50],a,b,k;

int main()
{
	scanf("%d",&n);
	repp(x,1,n)
	{
		list[x]=x;
	}
	scanf("%d",&k);
	repp(x,1,k)
	{
		scanf("%d,%d",&a,&b);
		swap(list[a],list[b]);
	}
	repp(x,1,n)
	{
		printf("%d\n",list[x]);
	}
	return 0;
}