#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(ri,n) for(int ri = (int)(n-1); ri >= 0; ri--)
#define rep2(i,x,n) for(int i = (int)(x); i < (int)(n); i++)
#define repit(itr,x) for(auto itr = x.begin(); itr != x.end(); itr++)
#define rrepit(ritr,x) for(auto ritr = x.rbegin(); ritr != x.rend(); ritr++)
#define ALL(n) begin(n), end(n)
using ll = long long;
using namespace std;

int main(){
	int h;
	cin >> h;
	vector<int> n(h);
	rep(snip_i, h) cin >> n.at(snip_i);
	rep(i, h){
		cout << "node " << i + 1 << ": key = " << n.at(i) << ", ";
		if(i != 0) cout << "parent key = " << n.at((i+1)/2-1) << ", ";
		int l = (i+1)*2-1, r = (i+1)*2;
		if(l < h) cout << "left key = " << n.at(l) << ", ";
		if(r < h) cout << "right key = " << n.at(r) << ", ";
		cout << endl;
	}
	return 0;
}
