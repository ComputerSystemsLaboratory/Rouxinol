#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <complex>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-9
#define INF 2000000000
#define sz(x) ((int)(x).size())
#define fi first
#define sec second
#define SORT(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define EQ(a,b) (abs((a)-(b))<eps)
bool prime[1001000];
void eratos()
{
	memset(prime,true,sizeof(prime));
	prime[0]=prime[1]=false;
	for(int i=2;i*i<=1000000;i++)if(prime[i])
	{
		for(int j=i*2;j<=1000000;j+=i)
		{
			prime[j]=false;
		}
	}
	return;
}
int main()
{
	eratos();
	while(1)
	{
		int a,d,n;
		scanf("%d %d %d",&a,&d,&n);
		if(a==0&&d==0&&n==0)break;
		int cnt=0;
		for(int i=0;;i++)
		{
			if(prime[a+d*i])cnt++;
			if(cnt==n)
			{
				printf("%d\n",a+d*i);
				goto end;
			}
		}
		end:;
	}
	return 0;
}