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

int steps[40];

int main() {
	int i;
	steps[1]=1;
	steps[2]=2;
	steps[3]=4;
	for(i=4;i<=30;i++){
		steps[i]=steps[i-1]+steps[i-2]+steps[i-3];
	}
	int n;
	while(n=in()){
		cout<<~-steps[n]/365/10+1<<endl;
	}
	return 0;
}