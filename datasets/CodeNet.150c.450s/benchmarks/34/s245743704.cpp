#include <vector>
#include <iostream>

const int kMaxJumpStep = 3;

int dp(const int N){
	std::vector<int> step(N+2);
	step[0] = 1;

	for (int i = 0; i <= N; i++){
		for (int j = i + 1; j <= i + kMaxJumpStep; j++){
			if (j > N) break;
			step[j] += step[i];
		}
	}

	return step[N];
}

int main(){
	std::cin.tie(0);
	std::ios::sync_with_stdio(false);

	while (1){
		int n;
		std::cin >> n;
		if (n == 0) break;
		std::cout << dp(n)/3650 + 1 << std::endl;
	}

	return 0;
}