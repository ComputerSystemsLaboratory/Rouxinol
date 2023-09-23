#define _CRT_SECURE_NO_WARNINGS // #pragma warning(disable:4996)
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <functional>
#include <sstream>
#include <cmath>
#include <set>
#include <map>
using namespace std; 

#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define all(a) a.begin(),a.end()
#define len(x) ((int)(x).size())
#define tmax(a,b,c) max((a),max((b),(c)))
#define tmin(a,b,c) min((a),min((b),(c)))
#define debug(x) cerr << #x << " is " << x << endl;

typedef pair<int, int> Pii;
typedef vector<int> Vi;
typedef vector<vector<int> > VVi;
typedef long long ll;
const int inf = 2e9;
const ll ll_inf = 1e17;
const int mod = 1e9 + 7;
const long double eps = 1e-10;

int prime[10001000];

int main()
{
	rep(i,2,1001) {
		int j = i;
		while (j < 10000000) {
			j += i;
			prime[j]++;
		}
	}
	prime[0]++;
	prime[1]++;

	while(1) {
		int a, d, n;
		cin >> a >> d >> n;
		if (!a && !d && !n) break;
		int cnt = 0;
		while (cnt < n) {
			if (!prime[a]) cnt++;
			a += d;
		}
		a -= d;
		cout << a << endl;
	}
	
	return 0;
}