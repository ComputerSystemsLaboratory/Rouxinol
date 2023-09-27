#include <bits/stdc++.h>
using namespace std;

int x, y, s;

int main(){
//	cin.tie(0);
//	ios::sync_with_stdio(false);
	while(1){
		cin >> x >> y >> s;
		if(x == 0 && y == 0 && s == 0) return 0;
		int ans = 0;
		for(int i=1; i<s; ++i){
			int a = i, b = s-i;
//			cout << a << " " << b << "\n";
			int c = 0, d = 0;
			for(int j=1; j<=a; ++j){
				int t = j*(100+x)/100;
				if(a == t) c = j;
			}
			for(int j=1; j<=b; ++j){
				int t = j*(100+x)/100;
				if(b == t) d = j;
			}
			a = c;
			b = d;
//			cout << a << " " << b << "\n";
			a = a*(100+y)/100;
			b = b*(100+y)/100;
//			cout << a << " " << b << "\n\n";
			ans = max(ans, a+b);
		}
		cout << ans << "\n";
	}
}
