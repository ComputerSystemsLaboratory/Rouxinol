#include<iostream>
int main(){
	int a;
	while (std::cin >> a,a){
		int change = 1000 - a;
		int coin[] = { 500, 100, 50, 10, 5, 1 };
		int ans = 0;
		for (int i = 0; i < 6; ++i){
			while (change >= coin[i]){
				ans++;
				change -= coin[i];
			}
		}
		std::cout << ans << std::endl;
	}
	
}