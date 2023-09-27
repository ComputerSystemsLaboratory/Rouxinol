#include <cstdio>
#include <vector>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int n, m;
int h[1500];
int w[1500];

int main(){
	while(scanf("%d%d", &n, &m), n){
		rep(i, n){
			scanf("%d", &h[i]);
		}
		rep(i, m){
			scanf("%d", &w[i]);
		}
		vector<int> a;
		rep(i, n){
			int s = 0;
			for(int j = i; j < n; ++j){
				s += h[j];
				a.push_back(s);
			}
		}
		vector<int> b;
		rep(i, m){
			int s = 0;
			for(int j = i; j < m; ++j){
				s += w[j];
				b.push_back(s);
			}
		}
		sort(b.begin(), b.end());
		int ans = 0;
		rep(i, a.size()){
			ans += upper_bound(b.begin(), b.end(), a[i]) - lower_bound(b.begin(), b.end(), a[i]);
		}
		printf("%d\n", ans);
	}
	return 0;
}