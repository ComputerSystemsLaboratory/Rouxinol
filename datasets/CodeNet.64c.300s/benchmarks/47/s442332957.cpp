#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cassert>

using namespace std;


#define all(c) ((c).begin()), ((c).end())
#define debug(c) cerr << "> " << #c << " = " << (c) << endl;
#define iter(c) __typeof((c).begin())
#define present(c, e) ((c).find((e)) != (c).end())
#define cpresent(c, e) (find(all(c), (e)) != (c).end())
#define tr(i, c) for (iter(c) i = (c).begin(); i != (c).end(); i++)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, a, b) for (int i = (int)(a); i <= (int)(b); i++)

#define mp make_pair
#define fst first
#define snd second
#define pb push_back


const double EPS = 1e-10;


typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef complex<double> P;


int main() {
	int m[200];
	rep(i, 200) m[i] = 0;
	int mv = 0;
	for (int a; cin >> a; ) mv = max(mv, ++m[a]);
	REP(i, 1, 100) if (m[i] == mv) cout << i << endl;
	
	return 0;
}