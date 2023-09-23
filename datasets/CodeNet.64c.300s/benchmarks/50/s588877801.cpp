#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <complex>
#include <string>
#include <sstream>
#include <algorithm>
#include <numeric>
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
const int MAX=100000;
const int geta=100;
struct BIT
{
	int bit[MAX+1];
	void add(int i,int x)
	{
		while(i<=MAX)
		{
			bit[i]+=x;
			i+=i&-i;
		}
	}
	int sum(int i)
	{
		int res=0;
		while(i>0)
		{
			res+=bit[i];
			i-=i&-i;
		}
		return res;
	}
};
BIT bit;
int N,a[105];
int main()
{
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
		a[i]+=geta;
	}
	int ans=0;
	for(int i=0;i<N;i++)
	{
		ans+=bit.sum(a[i]);
		bit.add(a[i],1);
	}
	sort(a,a+N);
	for(int i=0;i<N;i++)printf("%d%c",a[i]-geta,(i==N-1)?'\n':' ');
	printf("%d\n",N*(N-1)/2-ans);
	return 0;
}