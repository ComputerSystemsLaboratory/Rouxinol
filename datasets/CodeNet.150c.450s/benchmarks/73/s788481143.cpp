#include <iostream>
#include <cstdio>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cstring>
#include <numeric>
#include <algorithm>
#include <stdlib.h>
#include <functional>
#include <string>
#include <array>
#include <map>
#include <queue>
#include <limits.h>
#include <set>
#include <stack>
#include <random>
#include <complex>
#include <unordered_map>
#include <nmmintrin.h>
#include <chrono>
#define rep(i,s,n) for(int i = (s); (n) > i; i++)
#define REP(i,n) rep(i,0,n)
#define RANGE(x,a,b) ((a) <= (x) && (x) <= (b))
#define DUPLE(a,b,c,d) (RANGE(a,c,d) || RANGE(b,c,d) || RANGE(c,a,b) || RANGE(d,a,b))
#define INCLU(a,b,c,d) (RANGE(a,c,d) && (b,c,d))
#define PW(x) ((x)*(x))
#define ALL(x) (x).begin(), (x).end()
#define MODU 1000000007
#define bitcheck(a,b)   ((a >> b) & 1)
#define bitset(a,b)      ( a |= (1 << b))
#define bitunset(a,b)    (a &= ~(1 << b))
#define MP(a,b) make_pair((a),(b))
#define Manh(a,b) (abs((a).first-(b).first) + abs((a).second - ((b).second))
#define pritnf printf
#define scnaf scanf
#define itn int
#ifdef _MSC_VER
#define __builtin_popcount _mm_popcnt_u32
#define __builtin_popcountll _mm_popcnt_u64
#endif
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}
template<typename A, size_t N, typename T>
void Fill(A(&array)[N], const T &val) {
	std::fill((T*)array, (T*)(array + N), val);
}
int n, q;
vector<int> data;


void add(int pos, int val, int num, int l, int r){
	if (l > pos || r <= pos)
		return;

	data[num] += val;

	if (r - l > 1){
		add(pos, val, num * 2 + 1,  l, (l + r) / 2);
		add(pos, val, num * 2 + 2, (l + r) / 2, r);
	}
}

int  sum(int num, int kl, int kr, int l, int r){
	int ret = 0;

	if (l >= kl && r <= kr)
		return data[num];

	int mid = (l + r) / 2;
	if (mid > kl){
		ret += sum(num * 2 + 1, kl, kr, l, mid);
	}
	if (mid < kr){
		ret += sum(num * 2 + 2, kl, kr, mid, r);
	}
	return ret;
}

signed main() {
	scanf("%d %d", &n, &q);



	int cur = 1;
	while (cur < n)
		cur *= 2;

	data.resize(cur*2+1, 0);

	REP(i, q){
		int t, a, b;
		cin >> t >> a >> b;
		
		if (t == 0)
			add(a-1, b, 0, 0, cur);
		else
			printf("%d\n", sum(0, a-1, b, 0, cur));

	}
	


	return 0;
}