#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(ri,n) for(int ri = (int)(n-1); ri >= 0; ri--)
#define rep2(i,x,n) for(int i = (int)(x); i < (int)(n); i++)
#define repit(itr,x) for(auto itr = x.begin(); itr != x.end(); itr++)
#define rrepit(ritr,x) for(auto ritr = x.rbegin(); ritr != x.rend(); ritr++)
#define ALL(n) begin(n), end(n)
//using ll = long long;
using namespace std;

void CountingSort(vector<int> &a, vector<int> &b, int k){
	int n = a.size();
	vector<int> c(k+1, 0);
	rep(j, n){
		c.at(a.at(j))++;
	}

	rep2(i, 1, k+1){
		c.at(i) = c.at(i) + c.at(i-1);
	}

	rrep(i, n){
		b.at(c.at(a.at(i))-1) = a.at(i);
		c.at(a.at(i))--;
	}
}

int main(){
	int n, mx = 0;
	cin >> n;
	vector<int> a(n), b(n);
	rep(snip_i, n){
		cin >> a.at(snip_i);
		mx = max(mx, a.at(snip_i));
	}
	CountingSort(a, b, mx);
	rep(i, n){
		if(i != 0) cout << " ";
		cout << b.at(i);
	}
	cout << endl;
	return 0;
}
