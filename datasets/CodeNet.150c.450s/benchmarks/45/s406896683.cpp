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
const int INFTY = (1 << 21); // 2097152
// const ll INFTY = (1LL << 60);
const ll MD = 1000000007LL;

ll A, B;

// repeat square - (x ** n) % M
ll power(ll x, ll n, ll M){
	ll tmp = 1;

	if (n > 0){
		tmp = power(x, n/2, M);
		if ( n%2 == 0 ) tmp = (tmp*tmp)%M;
		else tmp = (((tmp*tmp)%M)*x)%M;
	}
	return tmp;
}

int main() {
	cin >> A >> B;
	cout << power(A, B, MD) << endl;
}