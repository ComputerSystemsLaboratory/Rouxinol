#include <bits/stdc++.h>
using namespace std;

int main(void){
	long long n, m;
	while(cin >> n >> m, n+m){
		vector<pair<int,int> > v(n);
		for(int i= 0; i < n; ++i){
			int a,b;
			cin >> a >> b;
			v.emplace_back(-b, a);
		}
		long long ans = 0;
		sort(v.begin(), v.end());
		for(int i = 0; i < n; ++i){
			long long d = v[i].second;
			long long p = -v[i].first;
			if(m>d){
				m -= d;
			}else if(m==0){
				ans += d*p;
			}else{
				ans += p*(d-m);
				m = 0;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
