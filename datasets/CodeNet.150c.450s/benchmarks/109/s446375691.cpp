#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

typedef pair<int,int> pii;

int main(){
	int n, h1, m1, s1, h2, m2, s2;
	while(scanf("%d", &n), n){
		vector<pii> v;
		v.reserve(2 * n);

		for(int i = 0; i < n; ++i){
			scanf("%d:%d:%d%d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
			v.push_back(pii(h1 * 3600 + m1 * 60 + s1, 1));
			v.push_back(pii(h2 * 3600 + m2 * 60 + s2, -1));
		}
		sort(v.begin(), v.end());
		
		int ans = 0;
		int t = 0;
		for(int i = 0; i < v.size(); ++i){
			t += v[i].second;
			ans = max(ans, t);
		}
		
		printf("%d\n", ans);
	}
}