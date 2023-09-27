#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cassert>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<utility>
#include<numeric>
#include<algorithm>
#include<bitset>
#include<complex>

using namespace std;

typedef long long Int;
typedef vector<int> vint;
typedef pair<int,int> pint;
#define mp make_pair

template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
template<class T> void chmin(T &t, T f) { if (t > f) t = f; }
template<class T> void chmax(T &t, T f) { if (t < f) t = f; }
int in() { int x; scanf("%d", &x); return x; }

int main() {
	int n;
	while(n=in()){
		n=1000-n;
		int res=0;
		res+=n/500;
		n-=n/500*500;
		res+=n/100;
		n-=n/100*100;
		res+=n/50;
		n-=n/50*50;
		res+=n/10;
		n-=n/10*10;
		res+=n/5;
		n-=n/5*5;
		res+=n;
		cout<<res<<endl;
	}
	return 0;
}