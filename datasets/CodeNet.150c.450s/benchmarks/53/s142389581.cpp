#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <stack>
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <stdio.h>
#include <math.h>


using namespace std;

typedef long long ll;

typedef vector<vector<ll>> V;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<string>> vvs;
typedef vector<ll> vll;

typedef pair<int, ll> P;
#define mp(x, y) make_pair(x, y)

typedef queue<int> qi;
typedef queue<string> qs;


#define rep(i, n) for(int i=0; i<(n); ++i)
#define repp(i, a, b) for(int i = (a); i <= (b); i++)
#define repm(i, n) for(int i=n; i >= 0; i--)

#define all(v) v.begin(), v.end()
//sort( all(v) )　などと使える


int main() {
	ll n; cin >> n;
	ll N = n;
	cout << n << ":";
	for (ll i = 2; i * i <= N; i++) {
		while (n % i == 0) {
			cout << " " << i;
			
			n = n / i;
		}
	}
	if (n != 1) cout << " " << n;
	cout << endl;
}
