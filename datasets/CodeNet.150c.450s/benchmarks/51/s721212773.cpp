#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<math.h>
#include<complex>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
#include<bitset>
#include<functional>
#include<assert.h>
#include<numeric>
#include<stdio.h>
#include <cstdint>
using namespace std;
#define REP(i,m,n) for(int i=(int)(m) ; i < (int) (n) ; ++i )
#define rep(i,n) REP(i,0,n)
using ll = long long;
const int inf = 1e9 + 7;
const ll longinf = 1LL << 60;
const ll mod = 1e9 + 7;


int tmp;
bool n[31];

int main(){

	REP(i, 1, 31)n[i] = true;

	REP(i, 1, 29) {
		cin >> tmp;
		n[tmp] = false;
	}

	REP(i, 1, 31) {
		if (n[i])cout << i << endl;
	}


	return 0;
}
