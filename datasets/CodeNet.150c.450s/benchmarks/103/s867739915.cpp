#include <iostream>

int n, sum, ans;

void solve(int n, int sum, int less);

int main(){
	while(true){
		ans = 0;
		std::cin >> n >> sum;
		if(n == 0 && sum == 0)
			break;
		solve(n, sum, 0);
		std::cout << ans << std::endl;
	}
	return 0;
}

void solve(int n, int sum, int less){
	if(n == 0){
		if(sum == 0){
			++ans;
			return;
		}
	}

	for(int i = less; i < 10; ++i){
		if(sum - i >= 0)
			solve(n - 1, sum - i, i + 1);
	}

	return;
}