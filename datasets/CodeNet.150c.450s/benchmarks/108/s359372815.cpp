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
int n;
vvi a;
vi d;
queue<int> q;

void Breadth(int pos) {
	q.push(pos);
	d[pos] = 0;
	while (!q.empty()) {
		pos = q.front();
		q.pop();
		rep(i, n) {
			if (a[pos][i] == 1 && d[i] == -1) {
				q.push(i);
				d[i] = d[pos]+1;
			}
		}
	}
}


int main() {
	cin >> n;
	a.resize(n, vi(n, 0));
	d.resize(n, -1);
	rep(i, n) {
		int num,m;
		cin >>num >>m;
		rep(i, m) {
			int tmp;
			cin >> tmp;
			a[num - 1][tmp - 1] = 1;
		}
	}
	Breadth(0);

	rep(i, n) {
		cout << i + 1 << " " << d[i] << endl;
	}
}

