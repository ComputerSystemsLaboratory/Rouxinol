#include <bits/stdc++.h>
#define _overload(_1,_2,_3,name,...) name
#define _rep(i,n) _range(i,0,n)
#define _range(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define rep(...) _overload(__VA_ARGS__,_range,_rep,)(__VA_ARGS__)
#define _all(arg) begin(arg),end(arg)

template<class T>bool chmax(T &a, const T &b) { return (a<b)?(a=b,1):0; }
template<class T>bool chmin(T &a, const T &b) { return (b<a)?(a=b,1):0; }

using namespace std;

int main(void){
	int n; cin >> n;
	vector<string> u(n);
	rep(i,n) cin >> u[i];
	int m; cin >> m;
	bool opened = false;
	rep(i,m) {
		string t; cin >> t;
		if(find(u.begin(), u.end(), t) != u.end()) {
			opened ^= true;
			if(opened) {
				cout << "Opened by " << t << endl;
			}
			else {
				cout << "Closed by " << t << endl;
			}
		}
		else {
			cout << "Unknown " << t << endl;
		}
	}

	return 0;
}