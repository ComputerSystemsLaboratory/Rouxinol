#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using msi = map<string, int>;
using mii = map<int, int>;
using psi = pair<string, int>;
using pii = pair<int, int>;
using vlai = valarray<int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define range(i,s,n) for(int i=s;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define INF 1E9
#define EPS 1E-9
#define MOD (1E9+7)
#define PI 3.1415926535897932384626433832795

std::ostream &operator<<(std::ostream &out, const vector<int> &tgt)
{
	string s;
	for (int i = 0; i<tgt.size(); i++) {
		s += (to_string(tgt[i]) + ((i != tgt.size() - 1) ? " " : ""));
	}
	out << s;
	return out;
}

int main(){
	int n,in,inn;
	cin >> n;
	vector < vector <bool>> g(n, vector<bool>(n,false));
	rep(i, n) {
		cin >> in;
		cin >> in;
		rep(j, in) {
			cin >> inn;
			g[i][inn - 1] = true;
		}
	}
	rep(i, n) {
		rep(j, n) {
			cout << (g[i][j] ? 1 : 0) << (j != n - 1 ? " " : "") ;
		}
		cout << endl;
	}
}
