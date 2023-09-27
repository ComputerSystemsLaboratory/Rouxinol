#include <cstdio>
#include <vector>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int n;
int a[200000];
int b[200001];

void add(int i, int x){
	while(i <= n){
		b[i] += x;
		i += i & -i;
	}
}

int sum(int i){
	int s = 0;
	while(i > 0){
		s += b[i];
		i -= i & -i;
	}
	return s;
}

int main(){
	scanf("%d", &n);
	rep(i, n){
		scanf("%d", &a[i]);
	}

	vector<P> v;
	rep(i, n){
		v.push_back(P(a[i], i));
	}
	sort(v.begin(), v.end());
	a[v[0].second] = 0;
	rep(i, n - 1){
		a[v[i + 1].second] = a[v[i].second] + (v[i].first != v[i + 1].first);
	}

	ll ans = 0;
	for(int i = n - 1; i >= 0; --i){
		ans += sum(a[i]);
		add(a[i] + 1, 1);
	}
	printf("%lld\n", ans);
	return 0;
}