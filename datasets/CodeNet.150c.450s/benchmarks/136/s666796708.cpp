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
#include <stack>
using namespace std; 

#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define all(a) a.begin(),a.end()
#define len(x) ((int)(x).size())
#define tmax(a,b,c) max((a),max((b),(c)))
#define tmin(a,b,c) min((a),min((b),(c)))
#define debug(x) cerr << #x << " is " << x << endl;

typedef pair<int, int> Pii;
typedef map<int, int> Mii;
typedef vector<int> Vi;
typedef vector<vector<int> > VVi;
typedef long long ll;
const int inf = 2e9;
const ll ll_inf = 1e17;
const int mod = 1e9 + 7;
const long double eps = 1e-10;
typedef pair<ll, ll> Pll; 
#define PI 3.14159265

ll gcd(ll a, ll b) {
	if (a < b) swap(a,b);
	if (b == 0) return a;
	return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
	return a * (b / gcd(a,b));
}

int main()
{
	ll a, b;
	while (cin>>a>>b) {
		cout << gcd(a,b) << " " << lcm(a,b) << endl;
	}
}