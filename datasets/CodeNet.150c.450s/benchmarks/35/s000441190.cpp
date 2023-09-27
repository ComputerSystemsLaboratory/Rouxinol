// 0022.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

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
#define roop(a,t) for(ll a=0;a<t;a++) 
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	ll n;
	while (cin >> n) {
		if (n == 0) { break; }
		ll dp[5001]; ll a[5001];
		ll ans = -9000000000;
		roop(i, n) {
			cin >> a[i];
			
			if (i > 0) {
				dp[i] = max(dp[i - 1] + a[i], a[i]);
			}
			else {
				dp[i] = a[i];
			}
		}
		for (int i = 0; i < n; i++) {
			ans = max(dp[i],ans);
		}
		cout << ans << endl;
	}
	return 0;
}
