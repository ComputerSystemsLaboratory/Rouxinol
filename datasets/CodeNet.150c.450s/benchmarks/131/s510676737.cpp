#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <stack>
#include <queue>
#include <utility>
#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(s) (s).begin(),(s).end()
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define rrep(i,n,l) for(int i=n-1;i>=l;i--)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a);
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vi;
//typedef vector<lint> vli;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

vi v;
int n, l;

int main() {
	while (cin >> n >> l) {
		if (n == 0 && l == 0)break;
		int d[100] = {};
		bool f = 0;
		d[0] = n;
		rep(i,1,21) {
			string s;
			stringstream ss, ss2, ss3;
			ss << n;
			ss >> s;
			while (s.size()<l){
				s += "0";
			}
			string t1 = s;
			sort(ALL(t1));
			string t2 = t1;
			reverse(ALL(t2));
			int mi, ma;
			ss2 << t1;
			ss2 >> mi;
			ss3 << t2;
			ss3 >> ma;
			n = ma - mi;
			d[i] = n;
			//o(n);
			REP(j, i) {
				if (d[i] == d[j]) {
					cout << j << " " << d[i] << " " << i - j << endl;
					f = 1;
					break;
				}
			}
			if (f)break;
		}
	}
}