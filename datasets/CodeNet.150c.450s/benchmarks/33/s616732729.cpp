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
	int x, y, s;
	while(cin>>x>>y>>s, x, y, s) {
		int res = 0;
		rep(i,1,s-1) {
			rep(j,1,s-1) {
				if((int)(i*(100+x)/100)+(int)(j*(100+x)/100) == s) {
					chmax(res, (int)(i*(100+y)/100)+(int)(j*(100+y)/100));
				}
			}
		}
		cout << res << endl;
	}
        
	return 0;
}