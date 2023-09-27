#include<iostream>

int S[10001], T[501];

int main(){
	int n, m;
	std::cin >> n;
	for(int i = 0; i < n; ++i){
		std::cin >> S[i];
	}
	std::cin >> m;
	for(int i = 0; i < m; ++i){
		std::cin >> T[i];
	}
	int ans = 0;
	for(int i = 0; i < m; ++i){
		for(int j = 0; j < n; ++j){
			if(T[i] == S[j]){
				ans++;
				break;
			}
		}
	}
	std::cout << ans << std::endl;
}