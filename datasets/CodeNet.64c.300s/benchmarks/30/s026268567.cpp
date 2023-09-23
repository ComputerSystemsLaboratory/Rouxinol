#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<iomanip>
#include<set>
#include<numeric>
#include<cstring>
#include<cstdio>
#include<functional>
#include<bitset>
#include<limits.h>
#include<cassert>
#include<iterator>
#include<complex>
#include<stack>
#include<sstream>
#include<iterator>
#include<list>

using namespace std;

typedef  long long int lint;

#define rep(i, n) for (lint i = 0; i < n; i++)
#define sort(v) sort((v).begin(), (v).end())
#define reverse(v) reverse((v).begin(), (v).end())
#define upper(v,hoge) upper_bound(v.begin(),v.end(),hoge)
#define lower(v,hoge) lower_bound(v.begin(),v.end(),hoge)
#define mp make_pair
#define IP pair<int,int>
#define enld endl
#define MOD  998244353

int main() {
	lint N;
	while (cin >> N, N != 0) {
		N = 1000 - N;
		lint ans = 0;
		ans += N / 500;
		N %= 500;
		ans += N / 100;
		N %= 100;
		ans += N / 50;
		N %= 50;
		ans += N / 10;
		N %= 10;
		ans += N / 5;
		N %= 5;
		ans += N / 1;
		N %= 1;
		cout << ans << enld;
	}
}
