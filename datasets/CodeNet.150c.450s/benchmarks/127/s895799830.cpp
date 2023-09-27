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

void solve(void){
	int M;
	cin >> M;
	rep(M, i) {
		string train;
		cin >> train;
		set <string> s;
		s.insert(train);
		rep(train.size()-1, i) {
			string f, l;
			f = train.substr(0, i+1);
			l = train.substr(i+1, train.size()-i-1);
			s.insert(l+f);
			reverse(all(f));
			s.insert(f+l);
			s.insert(l+f);
			reverse(all(l));
			s.insert(f+l);
			s.insert(l+f);
			reverse(all(f));
			s.insert(f+l);
			s.insert(l+f);
		}
		cout << s.size() << endl;
	}
}

int main(void){
	solve();
	//cout << "yui(*-v・)yui" << endl;
	return 0;
}

