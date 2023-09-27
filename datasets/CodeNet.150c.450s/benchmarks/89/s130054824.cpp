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



int main() {
	int max = 1000000;
	vi prime(max, 1);
	prime[0] = 0;
	prime[1] = 0;
	for (int i = 2; i <= sqrt(max); i++) {
		if (prime[i] == 1) {
			int j = 2;
			while (i*j < max) {
				prime[i*j] = 0;
				j++;
			}
		}
	}
	while (1) {
		int a, d, n;
		cin >> a >> d >> n;
		if (a == 0 && d == 0 && n == 0) break;
		int i = 0,num=0;
		while (1) {
			if (prime[a + d*i]) num++;
			if (num == n)break;
			i++;
		}
		cout << a + d*i << endl;
	}
}

