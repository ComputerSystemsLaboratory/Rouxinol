#include <bits/stdc++.h>

//const static double	de_PI	= 3.14159265358979323846;
//const static int	de_MOD	= 1000000007;
//const static int	de_MAX	= 999999999;
//const static int	de_MIN = -999999999;

int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	int n = 0;
	std::cin >> n;

	unsigned long long pro = 1;
	for (int i = n; i >= 1; i--) {
		pro *= i;
	}

	std::cout << pro << std::endl;

}