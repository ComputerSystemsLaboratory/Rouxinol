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
#define EQ(a,b) (abs((a)-(b))<EPS)
int a[100100];
int main()
{
	int n,k;
	while(1)
	{
	cin >> n >> k;
	if(n==0&&k==0)break;
	for(int i=0;i<n;i++)cin >> a[i];
	int ans=-INF;
	int base=0;
	for(int i=0;i<k;i++)base+=a[i];
	ans=base;
	for(int i=k;i<n;i++)
	{
		base-=a[i-k];
		base+=a[i];
		ans=max(ans,base);
	}
	cout << ans << endl;
	}
	return 0;
}