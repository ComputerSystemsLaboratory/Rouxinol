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
	int N, A, B, C, X, i, n, nn, j=0;
	int numbers[100];

	cin >> N >> A >> B >> C >> X;

	while(N || A || B || C || X) {

	for(i = 0; i < N; i++) {
		cin >> n;
		numbers[i] = n;
	}

	j = N;
	n = nn = X;

	for(i = 0; i <= 10000; i++) {
		if(n == numbers[N-j]) {
			j--;
		}
	
		if(j == 0) {
			goto success;
		}

		n = (A*nn+B)%C;

		nn = n;
	}
	
	cout << "-1" << endl;
	goto next;

success:
	cout << i << endl;
	goto next;
	
next:
	cin >> N >> A >> B >> C >> X;
	}
}