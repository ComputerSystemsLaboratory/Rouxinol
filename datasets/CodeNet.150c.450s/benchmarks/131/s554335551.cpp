#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007
#define EPS 1e-10
#define MAX_N 20000
#define MAX_M 16

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;

int a, l;

string changes(int i, int l){
	string res;
	stringstream ss;
	ss << i;
	ss >> res;
	reverse(ALL(res));
	int k = res.size();
	REP(i, l - k){
		res += "0";
	}
	reverse(ALL(res));
	return res;
}

int changei(string s){
	int res;
	stringstream ss;
	ss << s;
	ss >> res;
	return res;
}

int main(){
	while (cin >> a >> l&&a + l){
		vector<string> vs;
		string s = changes(a, l);
		while (find(ALL(vs), s) == vs.end()){
			vs.push_back(s);
			sort(ALL(s));
			int MIN = changei(s);
			sort(ALL(s), greater<int>());
			int MAX = changei(s);
			s = changes(MAX - MIN, l);
		}
		int ans = 0;
		REP(i, vs.size()){
			if (s == vs[i])ans = i;
		}
		cout << ans << " " << changei(s) << " " << vs.size() - ans << endl;
	}
}