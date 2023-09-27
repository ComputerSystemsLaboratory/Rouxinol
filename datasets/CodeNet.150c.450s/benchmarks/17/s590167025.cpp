#include <bits/stdc++.h>

//const static double	de_PI	= 3.14159265358979323846;
//const static int	de_MOD	= 1000000007;
//const static int	de_MAX	= 999999999;
//const static int	de_MIN = -999999999;

int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	std::vector<int> ans(5);
	for (int i = 0; i < 5; i++) {
		std::cin >> ans[i];
	}
	std::sort(ans.begin(), ans.end());
	for (int i = 4; i >= 1; i--) {
		std::cout << ans[i] << " ";
	}
	std::cout << ans[0] << std::endl;

}