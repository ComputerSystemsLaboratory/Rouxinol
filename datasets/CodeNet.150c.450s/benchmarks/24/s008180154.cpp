#include <cstdio>
#include <functional>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef pair<int, int> P;

int n, m;
P x[10000];

int main(){
	while(scanf("%d%d", &n, &m), n){
		rep(i, n){
			int d, p;
			scanf("%d%d", &d, &p);
			x[i] = P(p, d);
		}
		sort(x, x + n, greater<P>());
		int ans = 0;
		rep(i, n){
			if(m >= x[i].second){
				m -= x[i].second;
			}
			else{
				ans += (x[i].second - m) * x[i].first;
				m = 0;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}