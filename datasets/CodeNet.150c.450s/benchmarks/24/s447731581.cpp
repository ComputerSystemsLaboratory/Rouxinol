#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#define For(i, a, b) for(int (i)=(a); (i)<(b); (i)++)
#define rFor(i, a, b) for(int (i)=(a)-1; (i)>=(b); (i)--)
#define rep(i, n) For((i), 0, (n))
#define rrep(i, n) rFor((i), (n), 0)
#define fi first
#define se second
using namespace std;
typedef long long lint;
typedef pair<int, int> pii;

int n, m;
vector<pii> s(10010);

int main(){
	cin >> n >> m;
	while(n){
		rep(i, n){
			int d, p; cin >> d >> p;
			s[i] = pii(d, p);
		}
		sort(s.begin(), s.begin()+n, [](const pii &a, const pii &b){return a.se > b.se;});
		rep(i, n){
            if(m == 0) break;
			else if(s[i].fi <= m){
				m -= s[i].fi;
				s[i] = pii(0, s[i].se);
			}
			else{
				s[i] = pii(s[i].fi-m, s[i].se);
				m = 0;
			}
		}
		int ans = 0;
		rep(i, n) ans += s[i].fi * s[i].se;
		cout << ans << endl;
		cin >> n >> m;
	}
}

