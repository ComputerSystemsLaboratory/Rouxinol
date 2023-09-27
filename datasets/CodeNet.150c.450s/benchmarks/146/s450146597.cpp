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



inline double dot(const P &a, const P &b) {
	return (conj(a) * b).real();
}


int main(){
	int n; cin >> n;
	while (n--) {
		P ps[4];
		rep(i, 4) {
			double x, y; cin >> x >> y;
			ps[i] = P(x, y);
		}
		cout << (dot(ps[0] - ps[1], ps[2] * P(0, 1) - ps[3] * P(0, 1)) == 0 ? "YES" : "NO") << endl;
	}
	
	return 0;
}