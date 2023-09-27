#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 1000000000;
const int MOD = 1000000007;

int main(void) {
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);

	while(1){
		int n, m;
		cin >> n >> m;
		if(n == 0 && m == 0) break;

		vector< pair<int, int> > pt;
		for(int i=0; i<n; i++){
			int d, p;
			cin >> d >> p;
			pt.push_back(make_pair(p, d));
		}
		sort(pt.begin(), pt.end(), greater< pair<int, int> >());

		for(int i=0; i<n; i++){
			//printf("i: %d %d %d\n", pt[i].first, pt[i].second, m);
			if(pt[i].second <= m){
				m -= pt[i].second;
				pt[i].second = 0;
			}else{
				pt[i].second -= m;
				m = 0;
			}
			if(m == 0) break;
		}

		long long ans = 0;
		for(int i=0; i<n; i++){
			//printf("i: %d %d", pt[i].first, pt[i].second);
			ans += pt[i].first * pt[i].second;
		}
		cout << ans << endl;
	}
	

	return 0;
}