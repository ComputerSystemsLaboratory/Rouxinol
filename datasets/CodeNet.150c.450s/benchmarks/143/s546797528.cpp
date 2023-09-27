//高知能系Vtuberの高井茅乃です。
//Twitter: https://twitter.com/takaichino
//YouTube: https://www.youtube.com/channel/UCTOxnI3eOI_o1HRgzq-LEZw

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define INF INT_MAX
#define LLINF LLONG_MAX
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define MODA 1000000007 

template <typename T>
std::istream& operator>>(std::istream& is, std::vector<T>& vec) {
    for (T& x: vec) { is >> x; }
    return is;
}

int main() {
	ll ans = 0;
	ll tmp;
	int n; cin >> n;
	map<ll, int> m;
	ll sum = 0;
	REP(i, n){
		cin  >> tmp;
		m[tmp] ++;
		sum += tmp;
	}
	int q; cin >> q;
	ll b, c;
	REP(i, q){
		cin >> b >> c;
		sum += (c-b) * m[b];
		cout << sum << endl;
		m[c] += m[b];
		m[b] = 0;
	}
//	cout << ans << endl;
}