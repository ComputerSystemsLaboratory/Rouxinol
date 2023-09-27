#include <bits/stdc++.h>
using namespace std::literals::string_literals;
using i64 = std::int_fast64_t;
using std::cout;
using std::cerr;
using std::endl;
using std::cin;

template<typename T>
std::vector<T> make_v(size_t a){return std::vector<T>(a);}

template<typename T,typename... Ts>
auto make_v(size_t a,Ts... ts){
  return std::vector<decltype(make_v<T>(ts...))>(a,make_v<T>(ts...));
}

int main() {
	int n; scanf("%d", &n); std::vector<int> a(n);
	for(auto& v: a) scanf("%d", &v);

	i64 ans = std::accumulate(begin(a), end(a), 0LL);
	std::vector<int> cnt((int)1e5 + 1);
	for(auto v: a) cnt[v]++;

	int q; scanf("%d", &q);
	while(q--) {
		int x, y; scanf("%d%d", &x, &y);

		ans += (i64)(y - x) * cnt[x];
		cnt[y] += cnt[x];
		cnt[x] = 0;

		printf("%lld\n", ans);
	}
	return 0;
}
