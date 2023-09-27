#include <bits/stdc++.h>
#define _overload(_1,_2,_3,name,...) name
#define _rep(i,n) _range(i,0,n)
#define _range(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define rep(...) _overload(__VA_ARGS__,_range,_rep,)(__VA_ARGS__)
#define _all(arg) begin(arg),end(arg)

template<class T>bool chmax(T &a, const T &b) { return (a<b)?(a=b,1):0; }
template<class T>bool chmin(T &a, const T &b) { return (b<a)?(a=b,1):0; }

using namespace std;
using pii=pair<int,int>;

int main(void){
	int n, m;
	while(cin>>n>>m,n) {
		vector<pii> pd(n);
		long long res = 0;
		rep(i,n) {
			cin >> pd[i].second >> pd[i].first;
			res += pd[i].first * pd[i].second;
		}
		sort(pd.begin(), pd.end());
		reverse(pd.begin(), pd.end());
		for(int i = 0; i < n && m > 0; i++) {
			res -= min(pd[i].second, m) * pd[i].first;
			m -= pd[i].second;
		}
		cout << res << endl;
	}
        
	return 0;
}