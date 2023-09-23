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
ll mem[MAX_N];
int N;
int main() {

	int ret;
	cin >> N;
	mem[0] = 1;
	mem[1] = 1;
	rep(i, N+1){
		if (i >= 2) mem[i] = mem[i - 1] + mem[i - 2];
	}
	cout << mem[N] << endl;
}