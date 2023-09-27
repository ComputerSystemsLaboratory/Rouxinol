#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define vint vector<int>
#define vdouble vector<double>
#define vstring vector<string>
using namespace std;

#include<map>
#include<set>
#include<queue>

typedef long long ll;
typedef unsigned long long ull;

const int MAX_N = 1000000;
const int MAX_C = 1000000;
int N;
int a[20];
int Q;
int q[2000];
int c[MAX_N+1];

// combination
int flg[20];

void calc(){
	int ret = 0;
	rep(i, N) {
		if (flg[i] == 1) ret += a[i];
	}
	c[ret]=1;
	// fprintf(stderr, "%d\n", ret);
}

void dfs(int i){
	if (i == N) {calc(); return;}
	flg[i] = 0; dfs(i+1);
	flg[i] = 1; dfs(i+1);
}

void dfs_run(){
	rep(i, N) { flg[i] = 0; }
	dfs(0);
}

int main() {

	cin >> N;
	rep(i, N) cin >> a[i];
	cin >> Q;
	rep(i, Q) cin >> q[i];
	// fprintf(stderr, "%d %d \n", N, Q);

	rep(i, MAX_N+1){c[i]=0;}

	dfs_run();

	rep(i, Q){
		if(c[q[i]] == 0) { cout << "no" << endl;}
		else {cout << "yes" << endl; }
	}

}