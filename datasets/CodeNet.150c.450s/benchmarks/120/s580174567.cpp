#include <iostream>
#include <vector>
#include <algorithm>

constexpr int MAX_C = 10;
constexpr int MAX_R = 10000;

int R, C;
bool a[MAX_C][MAX_R];

int solve();

int dfs(const int& n = 0);

int main(){
	std::ios::sync_with_stdio(false);
	while(true){
		std::cin >> C >> R;

		if(C == 0 && R == 0){
			break;
		}

		for(int i = 0; i < C; ++i){
			for(int j = 0; j < R; ++j){
				char in;
				std::cin >> in;
				if(in == '1'){
					a[i][j] = true;
				}
				else{
					a[i][j] = false;
				}
			}
		}
		
		std::cout << dfs() << std::endl;
	}
	return 0;
}

int dfs(const int& n){
	if(n == C){
		return solve();
	}

	int res = 0;
	for(int i = 0; i < R; ++i){
		a[n][i] = !a[n][i];
	}
	res = dfs(n + 1);
	for(int i = 0; i < R; ++i){
		a[n][i] = !a[n][i];
	}
	res = std::max(res, dfs(n + 1));

	return res;
}

int solve(){
	int res = 0;
	for(int i = 0; i < R; ++i){
		int _a = 0, _b = 0;
		for(int j = 0; j < C; ++j){
			if(a[j][i]){
				++_a;
			}
			else{
				++_b;
			}
		}
		res += std::max(_a, _b);
	}
	return res;
}