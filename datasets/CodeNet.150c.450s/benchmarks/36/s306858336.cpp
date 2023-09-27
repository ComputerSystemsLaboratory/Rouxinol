#include <bits/stdc++.h>

//const static double	de_PI	= 3.14159265358979323846;
//const static int	de_MOD	= 1000000007;
//const static int	de_MAX	= 999999999;
//const static int	de_MIN = -999999999;

int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	double n = 0;
	std::vector<double> ans;

	while (std::cin >> n) {
		double sum = 0;
		double div = 600 / n;
		for (int i = 1; i < div; i++) {
			sum += n*(n*i)*(n*i);
		}
		ans.push_back(sum);
	}

	std::for_each(ans.begin(), ans.end(), [](int i) {std::cout << i << std::endl; });
}