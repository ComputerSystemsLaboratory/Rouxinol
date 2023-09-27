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
vector<int> a,b;
int suma=0,sumb=0;
int main()
{
	while(1)
	{
	a.clear();
	b.clear();
	suma=0;
	sumb=0;
	int n,m;
	cin >> n >> m;
	if(n==0&&m==0)break;
	for(int i=0;i<n;i++)
	{
		int k;
		cin >> k;
		suma+=k;
		a.pb(k);
	}
	for(int i=0;i<m;i++)
	{
		int k;
		cin >> k;
		sumb+=k;
		b.pb(k);
	}
	SORT(a);
	SORT(b);
	int diff=suma-sumb;
	if(diff%2!=0)
	{
		cout << -1 << endl;
		goto end;
	}
	for(int i=0;i<n;i++)
	{
		if(binary_search(b.begin(),b.end(),a[i]-diff/2))
		{
			cout << a[i] << ' ' << a[i]-diff/2 << endl;
			goto end;
		}
	}
	cout << -1 << endl;
	end:;
	}
	return 0;
}