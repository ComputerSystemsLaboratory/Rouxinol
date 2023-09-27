#include <bits/stdc++.h>
using namespace std;

int n, m, p;

int main(){
//	cin.tie(0);
//	ios::sync_with_stdio(false);
	while(1){
		cin >> n >> m >> p;
		if(n == 0 && m == 0 && p == 0) return 0;
		int s = 0, t = 0;
		for(int i=0; i<n; ++i){
			int tmp;
			cin >> tmp;
			s += tmp;
			if(i == m-1) t = tmp;
		}
//		cout << s << " " << t << "\n";
		s *= 100;
		s = s * (100 - p) / 100;
		if(t == 0) cout << 0 << "\n";
		else{
			s /= t;
			cout << s << "\n";
		}
	}
}
