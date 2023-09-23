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
	int n;
	while(cin>>n,n) {
		int res = 0;
		rep(i,2,n) {
			if(i%2) {
				if(n%i == 0) {
					if(n/i - ((i+1)/2) >= 0) res++;
				}
			}
			else {
				if(n%i && (2*n)%i==0) {
					if((((2*n)/i)-1)/2 - i/2 >= 0) res++;
				}
			}
		}
		cout << res << endl;
	}
        
	return 0;
}