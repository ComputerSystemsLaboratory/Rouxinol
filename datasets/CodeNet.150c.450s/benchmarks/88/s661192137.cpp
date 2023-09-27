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
	int h,w;
	while(cin>>h>>w,h,w) {
		int diag2 = 150*150*2;
		int res_h, res_w;
		rep(_h,1,150+1) rep(_w,1,150+1) {
			if(_w > _h) {
				if(h*h+w*w <= _h*_h+_w*_w) {
					if(h*h+w*w==_h*_h+_w*_w && _h<=h) continue;
					if(chmin(diag2, _h*_h+_w*_w)) {
						res_h = _h;
						res_w = _w;
					}
				}
			}
		}
		cout << res_h << " " << res_w << endl;
	}
        
	return 0;
}