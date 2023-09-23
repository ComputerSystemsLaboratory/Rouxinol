#include<iostream>
#include<algorithm>

int n, s;
bool numbers[10] = { true };
int ans;

void dfs(int sum, int i, int num){
	if (i == n){
		if (sum == s) ans++;
		return ;
	}
	for (int j = num+1; j < 10; ++j){
		if(sum + j <= s)dfs(sum + j, i + 1,j);
	}
}

int main(){
	while (std::cin >> n >> s){
		if (n == 0 && s == 0)break;
		ans = 0;
		dfs(0, 0, -1);
		std::cout << ans << std::endl;
	}
	return 0;
}