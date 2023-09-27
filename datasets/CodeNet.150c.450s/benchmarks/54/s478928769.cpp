#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << endl
#define p(x) cout << (x)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define vv(type, c, m, n, i) vector<vector<type>> c(m, vector<type>(n, i));
#define vvv(type, c, m, n, l, i) vector<vector<vector<type>>> c(m, vector<vector<type>>(n, vector<type>(l, i)));
#define mat(type, c, m, n) vector<vector<type>> c(m, vector<type>(n));for(auto& r:c)for(auto& i:r)cin>>i;
#define rep(i,a,n) for(int i=(a), i##_len=(n); i<i##_len; ++i)
#define rrep(i,a,n) for(int i=(a); i>n; --i)
#define len(x) ((int)(x).size())
#define mp make_pair
#define eb emplace_back
typedef long long ll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
int main() {
	string s; cin >> s;
	string line;
	int cnt = 0;
	while(true) {
	    cin >> line;
	    if(line == "END_OF_TEXT") break;
	    if(len(line) != len(s)) continue;
	    string s2 = "";
	    rep(i, 0, len(line)) s2 += tolower(line[i]);
	    if(s2 == s) ++cnt;
	}
	P(cnt);
	return 0;
}