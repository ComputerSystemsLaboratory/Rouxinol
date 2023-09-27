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
	int n,flag;
	while(1){
		cin >> n;
		if (n == 0) break;
		int ans = 0;
		string str,str2;
		vector<string> v(n);
		cin >> str;
		v[0]=str;
		for (int i = 1; i < n;i++) {
			cin >> v[i];
			str = v[i];
			str2 = v[i - 1];
			if (str[0] != str2[0] && str[1] == str2[1]) {
				ans++;
			}
		}
		cout << ans << endl;
	}
}

