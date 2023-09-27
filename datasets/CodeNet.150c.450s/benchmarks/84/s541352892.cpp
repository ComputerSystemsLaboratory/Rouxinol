#include<stdio.h>
#include<cmath>
#include<math.h>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<complex>
#include<queue>
#include<set>
#include<utility>
#include<iomanip>
#include<limits>
#include<thread>
#include<map>
#include<stack>
#include<numeric>
#include<cassert>
#include<random>
#include<chrono>
#include<unordered_set>
#include<unordered_map>
#include<fstream>
#include<list>
#include<functional>
#include<bitset>
#include<tuple>
#include <cstdio>

using namespace std;

template <class... A>
void prints() { cout << "\n"; }
template <class... A>
void prints_rest() { cout << "\n"; }
template <class T, class... A>
void prints_rest(const T &first, const A &... rest) { cout << " " << first; prints_rest(rest...); }
template <class T, class... A>
void prints(const T &first, const A &... rest) { cout << first; prints_rest(rest...); }
template <class T, class... A>
void printd(const T &first, const A &... rest) { cout << fixed << setprecision(15) << first; prints_rest(rest...); }


#define rep(i,n) for(int i=0; i<n; i++)
#define mp make_pair

typedef pair<int,int> pii;
typedef long long ll;

//BIT bit(16384);みたいな感じで生成する
struct BIT {
	typedef int T;
	T n;
	vector<T> bit;

	// 各要素の初期値は 0
	BIT(T num) : bit(num+1, 0) { n = num; }

	// a_i += w
	void add(T i, T w) {
		for (T x = i; x <= n; x += x & -x) {
			bit[x] += w;
		}
	}

	// [1, i] の和を計算.
	T sum(T i) {
		T ret = 0;
		for (T x = i; x > 0; x -= x & -x) {
			ret += bit[x];
		}
		return ret;
	}

	//[iより大きい]の和を計算
	T sum_above(T i) {
		T ret = 0;
		for (T x = i; x > 0; x -= x & -x) {
			ret += bit[x];
		}
		return sum(n) - ret;
	}

};

int n;
int a[200005];

ll inversion_count(){
	ll cnt = 0;
	set<pii> s;

	rep(i,n) s.insert(mp(a[i],i));
	int cnttmp = 1;
	for(auto x : s) {
		a[x.second] = cnttmp;
		cnttmp++;
    }

	BIT bit(200005);

	rep(i,n){
		cnt += bit.sum_above(a[i]);
		bit.add(a[i],1);
	}
	return cnt;
}


int main(){
	cin >> n;
	rep(i,n)cin >> a[i];
	ll ans = inversion_count();
	prints(ans);

	return 0;
}

