#include<stdio.h>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <iterator>
#include <list>
#include <map>     
#include <numeric>
#include <utility>
#include <queue>
#include <set>
#include <sstream>
#include <iomanip>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define ld long double
#define rep(a,t) for(int a=0;a<t;++a) 
#define forever while(true)
#define Sort(a) sort(a.begin(),a.end())
#define Reverse(a) reverse(a.begin(),a.end())
#define pb push_back
#define int_maxvalue numeric_limits<int>::max()
ll mod = 1000000007;
ll m;
ll Pow(ll n) {
	if (n == 1) 
	{
		return m;
	}
	ll p = Pow(n/2)%mod;
	p *= p;
	p %= mod; 
	if (n % 2 == 1)
	{
		p *= m;
	}
	return p % mod;
}
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	ll  n;
	cin >> m >> n;
	//for (int i = 1; i < 1000; i++)
	{
		cout << Pow(n) << endl;
	}
	return 0;
}
