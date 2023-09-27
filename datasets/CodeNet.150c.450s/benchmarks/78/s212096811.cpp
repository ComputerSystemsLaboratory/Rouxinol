#include "bits/stdc++.h"
#include <sys/timeb.h>
#include <fstream>

using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define replrev(i,a,b) for(int i=(int)(b)-1;i>=(int)(a);i--)
#define reprev(i,n) replrev(i,0,n)
#define repi(itr,ds) for(auto itr=ds.begin();itr!=ds.end();itr++)
#define all(a) a.begin(),a.end()
#define mp make_pair
#define mt make_tuple
#define INF 2000000000
#define INFL 1000000000000000000LL
#define EPS 1e-9
#define MOD 1000000007
#define PI 3.1415926536
#define RMAX 4294967295

typedef long long ll;
typedef pair<int, int> P;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<P> vP;
typedef vector<vector<int> > vvi;
typedef vector<vector<bool> > vvb;
typedef vector<vector<ll> > vvll;
typedef vector<vector<char> > vvc;
typedef vector<vector<double> > vvd;
typedef vector<vector<P> > vvP;
typedef priority_queue<int, vector<int>, greater<int> > pqli;
typedef priority_queue<ll, vector<ll>, greater<ll> > pqlll;
typedef priority_queue<P, vector<P>, greater<P> > pqlP;
typedef pair<int, pair<int, int> > Edge;
typedef vector<Edge> vE;
typedef priority_queue<Edge, vector<Edge>, greater<Edge> > pqlE;

int main() {
	vi num(180);
	rep(i, 180) {
		num[i] = (i + 1)*(i + 2)*(i + 3) / 6;
	}
	int N = 1000001;
	vi ans1(N), ans2(N);
	rep(i, N) {
		ans1[i] = ans2[i] = i;
	}
	
	repl(i, 1, 180) {
		repl(j, num[i], N) {
			ans1[j] = min(ans1[j], ans1[j - num[i]] + 1);
		}
	}
	repl(i, 1, 180 / 4) {
		repl(j, num[4 * i], N) {
			ans2[j] = min(ans2[j], ans2[j - num[4 * i]] + 1);
		}

	}

	while (true) {
		int n;
		cin >> n;
		if (n == 0)break;
		cout << ans1[n] << " " << ans2[n] << endl;
	}


	return 0;
}