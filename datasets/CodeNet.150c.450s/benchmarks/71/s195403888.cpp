#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,to) for(int i=x;i<to;i++)

int sum(int n){
	int a,b,c,d,ans = 0;
	rep(a,0,10)
	  rep(b,0,10)
	    rep(c,0,10)
	      rep(d,0,10)
	        if(n==a+b+c+d) ans++;
	return ans;
}

int main() {
	int n;
	while(cin >> n)
		cout << sum(n) << endl;	
	return 0;
}
