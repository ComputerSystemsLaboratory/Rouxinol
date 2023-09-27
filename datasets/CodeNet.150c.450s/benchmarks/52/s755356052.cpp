#include <bits/stdc++.h>

//const static double	de_PI	= 3.14159265358979323846;
//const static int	de_MOD	= 1000000007;
//const static int	de_MAX	= 999999999;
//const static int	de_MIN = -999999999;

int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	int n = 0;
	std::stack<int> S;
	std::vector<int> ans;

	while (std::cin >> n) {
		if (n != 0) {
			S.push(n);
		}
		else {
			ans.push_back(S.top());
			S.pop();
		}
	}

	for (int i = 0; i < ans.size(); i++) {
		std::cout << ans[i] << std::endl;
	}

}