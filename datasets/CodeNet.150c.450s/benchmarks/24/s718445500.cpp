#include<bits/stdc++.h>
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
#define MOD (ll)(1E9+7)
#define PI 3.1415926535897932384

template <class T>ostream &operator<<(std::ostream &o, const vector<T> &v)
{
	rep(i, v.size()) {
		o << (i > 0 ? " " : "") << v[i];
	}
	return o;
}


class info {
	public:
		int dis;
		int cost;
};
bool comp(info lh, info rh) {
	return lh.cost > rh.cost;
}
int main() {
	int road, money;
	while (cin >> road >> money, road) {
		vector <info> v(road);
		for (int i = 0; i < road; i++) {
			cin >> v[i].dis >> v[i].cost;
		}
		sort(v.begin(), v.end(), comp);
		/*
		for (auto c : v) {
			cout << c.dis << " " << c.cost << endl;
		}
		*/
		for (int i = 0; i < v.size(); i++) {
			if (v[i].dis <= money) {
				money -= v[i].dis;
				v[i].dis = 0;
			}
			else {
				v[i].dis -= money;
				money = 0;
			}
		}
		int ans = 0;
		for (int i = 0; i < v.size(); i++) {
			ans += v[i].cost*v[i].dis;
		}
		cout << ans << endl;
	}
}

