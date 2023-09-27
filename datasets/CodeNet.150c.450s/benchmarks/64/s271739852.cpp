#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <functional>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <climits>
 
#define all(c) (c).begin(), (c).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second
 
const int INF=100000000;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
using namespace std;
typedef pair<int ,int > P;
typedef long long ll;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n)cin >> a[i];
	int q;
	cin >> q;
	vector<int> m(q);
	rep(i, q) cin >> m[i];

	function<bool(int,int)> f = [&](int i,int N)
	{
		if (N == 0)
		{
			return true;
		}
		if (i >= n)
		{
			return false;
		}
		return f(i + 1, N) || f(i + 1, N - a[i]);
		
	};
	for (int i = 0; i < q; i++)
	{
		if (f(0,m[i]))
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
	return 0;
}