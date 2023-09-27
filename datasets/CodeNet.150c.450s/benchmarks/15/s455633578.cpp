#include <bits/stdc++.h>

//const static double	de_PI	= 3.14159265358979323846;
//const static int	de_MOD	= 1000000007;
//const static int	de_MAX	= 999999999;
//const static int	de_MIN = -999999999;


int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());
	int n = 0, q = 0;
	
	std::cin >> n;
	std::vector<int> S(n);
	for (int i = 0; i < n; i++) {
		std::cin >> S[i];
	}

	std::sort(S.begin(), S.end());

	std::cin >> q;
	std::vector<int> T(q);
	for (int i = 0; i < q; i++) {
		std::cin >> T[i];
	}

	std::sort(T.begin(), T.end());

	int ans = 0;
	for (int i = 0; i < q; i++) {
		if (std::find(S.begin(), S.end(), T[i]) != S.end()) {
			ans++;
		}
	}

	std::cout << ans << std::endl;

}