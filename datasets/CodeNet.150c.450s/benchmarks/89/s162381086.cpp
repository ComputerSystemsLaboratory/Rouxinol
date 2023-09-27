#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>

using namespace std;

inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str();}

typedef vector<int> vi;
typedef vector<vi>  vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;

#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EACH(t,i,c) for(t::iretator i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

const double EPS = 1e-10;

int main() {
	vi prime_p(1000000, 1);
	prime_p[0] = 0;
	prime_p[1] = 0;

	FOR(i, 2, 1000000) {
		if(prime_p[i]) {
			for(int j = i*2; j < 1000000; j += i) {
				prime_p[j] = 0;
			}
		}
	}

	vi prime;

	FOR(i, 2, 1000000) {
		if(prime_p[i]) {
			prime.push_back(i);
		}
	}

	int a, d, n;

	while(cin >> a >> d >> n, a) {
		vi num;
		int k = a-d;
		if(a == 1) {
			k += d;
		}

		do {
		check:
			k += d;
			for(int i = 0; prime[i] < k; i++) {
				if(k%prime[i] == 0) {
					goto check;
				}
			}
			num.push_back(k);
		} while(num.size() <= n);
	
		cout << num[n-1] << endl; 
	}
}