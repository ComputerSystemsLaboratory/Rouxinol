/*
Priority Queue(https://onlinejudge.u-aizu.ac.jp/#/problems/ALDS1_9_C)
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <functional>
#include <complex>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define Repr(e, b, i) for(int i = e; i >= b; i--)
#define rep(n, i) Rep(0, n-1, i)
#define repr(n, i) Repr(n-1, 0, i)
#define all(v) (v).begin(), (v).end()
#define pb(v) push_back(v)
#define uniq(v) (v).erase(unique(all(v)),(v).end())
#define bitcnt(x) __builtin_popcount(x)
#define fst first
#define snd second

typedef long long ll;

void solve(void){
	string ope;
	ll n;
	priority_queue<ll> q;
	while (cin >> ope) {
		if (ope == "end") break;
		if (ope == "insert") {
			cin >> n;
			q.push(n);
		}
		else {
			cout << q.top() << endl;
			q.pop();
		}
	}
}

int main(void){
	solve();
	//cout << "yui(*-v・)yui" << endl;
	return 0;
}

