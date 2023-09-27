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
	std::vector<std::string> eval = {"AC", "WA", "TLE", "RE"};
	std::vector<int> cnt(4);

	int n; scanf("%d", &n);
	while(n--) {
		std::string s; cin >> s;

		for(int i = 0; i < 4; i++) {
			if(eval[i] != s) continue;

			cnt[i]++;
		}
	}

	for(int i = 0; i < 4; i++) printf("%s x %d\n", eval[i].c_str(), cnt[i]);
	return 0;
}
