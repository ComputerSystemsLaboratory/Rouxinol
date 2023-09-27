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
int n;
int a[101];
ll dp[101][1000];
int main()
{
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(int i=0;i<101;i++)
	{
		for(int j=0;j<1000;j++)
		{
			dp[i][j]=0ll;
		}
	}
	dp[0][a[0]]=1ll;
	for(int i=0;i<n-2;i++)
	{
		for(int j=0;j<=20;j++)
		{
			if(j-a[i+1]>=0)dp[i+1][j]+=dp[i][j-a[i+1]];
			if(j+a[i+1]<=20)dp[i+1][j]+=dp[i][j+a[i+1]];
		}
	}
	cout << dp[n-2][a[n-1]] << endl;
	return 0;
}