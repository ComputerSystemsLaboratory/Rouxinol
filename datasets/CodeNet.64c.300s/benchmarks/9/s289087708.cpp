#include <bits/stdc++.h>

const static double	de_PI	= 3.14159265358979323846;
const static int	de_MOD	= 1000000007;
const static int	de_MAX	= 999999999;
const static int	de_MIN = -999999999;

int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	int a = 0;
	std::cin >> a;

	double n = 100000;
	for (int i = 0; i < a; i++) {
		n = n*1.05;
		n = static_cast<int>(ceil(n / 1000));
		n = n * 1000;
	}

	std::cout << std::setprecision(20) << n << std::endl;
}