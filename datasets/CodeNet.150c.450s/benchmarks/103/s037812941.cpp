#include <iostream>

//n : n????????°???????¶?????????§
//s : ?????????s?????????
int n, s; // 3 1
int ans;

void dfs(int a, int sum, int bmax) {
	if(a < n) {
			for(int i = bmax; i <= 9; ++i) {
				if(sum + i <= s)
					dfs(a + 1, sum + i, i + 1);
			}
	}
	else if(a == n) {
		if(s == sum)
			++ans;
	}
}

int main() {
	while(std::cin >> n >> s, !(n == 0 && s == 0)) {
		dfs(0, 0, 0);
		
		std::cout << ans << std::endl;
		
		ans = 0;
	}
}