#include<iostream>

int main(){
	int n, ans = 100000;
	std::cin >> n;
	for (int i = 0; i < n; ++i){
		ans *= 1.05;
		--ans;
		ans += 1000 - (ans % 1000);
	}
	std::cout << ans << std::endl;
	return 0;
}