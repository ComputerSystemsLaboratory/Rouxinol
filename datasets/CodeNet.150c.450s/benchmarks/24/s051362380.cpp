#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	while (scanf("%d %d", &n, &m), n){
		typedef pair<int, int> P;
		vector<P> v;
		int res = 0;
		for (int i = 0; i < n; i++){
			int a, b;
			scanf("%d %d", &a, &b);
			v.push_back(P(b, a));
			res += a * b;
		}
		sort(v.begin(), v.end());
		reverse(v.begin(), v.end());
		
		int p = 0;
		while (m > 0 && p < n){
			if (v[p].second == 0){
				++p;
				continue;
			}
			int t = min(m, v[p].second);
			res -= v[p].first * t;
			v[p].second -= t;
			m -= t;
		}
		
		printf("%d\n", res);
	}
	
	return 0;
}