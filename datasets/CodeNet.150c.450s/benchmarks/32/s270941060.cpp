#include <bits/stdc++.h>
#define _overload(_1,_2,_3,name,...) name
#define _rep(i,n) _range(i,0,n)
#define _range(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define rep(...) _overload(__VA_ARGS__,_range,_rep,)(__VA_ARGS__)
#define _all(arg) begin(arg),end(arg)

template<class T>bool chmax(T &a, const T &b) { return (a<=b)?(a=b,1):0; }

using namespace std;

int main(void){
	int m, nmin, nmax;
	while(cin>>m>>nmin>>nmax,m,nmin,nmax) {
		int res = 0;
		int n = 0;
		int prev = 0;
		rep(i,m) {
			int cur; cin >> cur;
			if(nmin<=i && i <= nmax) if(chmax(res, prev-cur)) n=i;
			prev = cur;
		}
		cout << n << endl;
	}
        
	return 0;
}