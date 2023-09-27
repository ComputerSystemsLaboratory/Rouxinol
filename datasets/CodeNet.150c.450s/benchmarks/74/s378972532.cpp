#include <iostream>
#include <algorithm>

constexpr int MAX_N = 50001, MAX_M = 21;
constexpr int INF = 1000000000;

int n, m, c[MAX_M], t[MAX_N];

void fill_dp();

int main(){
	std::cin >> n >> m;
	for(int i = 0; i < m; ++i){
		std::cin >> c[i];
	}
	fill_dp();
	std::cout << t[n] << std::endl;
	return 0;
}

void fill_dp(){
	for(int i = 0; i < MAX_N; ++i) t[i] = INF;

	t[0] = 0;
	for(int i = 0; i < m; ++i){
		for(int j = c[i]; j < n + 1; ++j){
			t[j] = std::min(t[j], t[j - c[i]] + 1);
		}
	}
	return;
}