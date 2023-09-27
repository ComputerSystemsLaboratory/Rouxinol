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
#define EQ(a,b) (abs((a)-(b))<EPS)
int m;
int cal(int a)
{
	int k=m/a;
	m-=a*k;
	return k;
}
int main()
{
	while(1)
	{
		int n;
		cin >> n;
		if(n==0)break;
		m=1000-n;
		int ans=0;
		ans+=cal(500);
		ans+=cal(100);
		ans+=cal(50);
		ans+=cal(10);
		ans+=cal(5);
		ans+=cal(1);
		cout << ans << endl;
	}
	return 0;
}