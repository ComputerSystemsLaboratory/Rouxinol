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
#define PI 3.1415926535897932384

std::ostream &operator<<(std::ostream &out, const vector<int> &tgt)
{
	string s;
	for (int i = 0; i<tgt.size(); i++) {
		s += (to_string(tgt[i]) + ((i != tgt.size() - 1) ? " " : ""));
	}
	out << s;
	return out;
}

int minval(string s) {
	vi v;
	int ans=0;
	for (char x : s) {
		v.push_back(x - '0');
	}
	sort(v.begin(), v.end());
	rep(i, v.size()) {
		ans = ans * 10 + v[i];
	}
	return ans;
}

int maxval(string s) {
	vi v;
	int ans = 0;
	for (char x : s) {
		v.push_back(x - '0');
	}
	sort(v.begin(),v.end(),greater<int>());
	rep(i, v.size()) {
		ans = ans * 10 + v[i];
	}
	return ans;
}

void solve(int n,int l) {
	int ans = 0;
	string s=to_string(n);
	range(i, s.size(), l) {
		s.push_back('0');
	}
	//cout << s << endl;
	vector<string> v;
	v.push_back(s);
	while (1) {
		ans++;
		int val = maxval(s) - minval(s);
		s = to_string(val);
		//cout << s << endl;
		for (int i = 0; i < v.size(); i++) {
			if (s == v[i]) {
				int a = stoi(s);
				cout << i <<" "<<a<<" " <<ans-i<< endl;
				return;
			}
		}
		v.push_back(s);
		range(i, s.size(), l) {
			s.push_back('0');
		}

		if (ans == 50) {
			cout << "err" << endl;
		}
	}
}

int main() {
	int n, m;
	while (cin >> n >> m, m) {
		solve(n, m);
	}
}
