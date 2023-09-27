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
#define INF 1e9
#define EPS 1e-9
#define MOD (1e9+7)

int ans = 0;
deque<int> marge(deque<int> l, deque<int> r) {
	deque<int> d;
	int siz = l.size() + r.size();
	rep(i,siz){
		ans++;
		if (r.empty() || (!l.empty() && l.front() < r.front())) {
			d.push_back(l.front());
			l.pop_front();
		}
		else {
			d.push_back(r.front());
			r.pop_front();
		}
	}
	return d;
}

deque<int> msort(deque<int> d) {
	if (d.size() == 1)return d;
	deque<int> l, r;
	int p = (d.size() + 1) / 2;
	rep(i, d.size()) {
		if (i < p)l.push_back(d[i]);
		else r.push_back(d[i]);
	}
	deque<int>ll = msort(l);
	deque<int>rr = msort(r);
	deque<int>dd =marge(ll, rr);
	return dd;
}


int main() {
	int n,in;
	cin >> n;
	deque<int> d,dans;
	rep(i, n) {
		cin >> in;
		d.push_back(in);
	}
	dans = msort(d);
	rep(i, dans.size()) {
		cout << dans[i] << (i != dans.size() - 1 ? " " : "");
	}
	cout << endl << ans << endl;
}

