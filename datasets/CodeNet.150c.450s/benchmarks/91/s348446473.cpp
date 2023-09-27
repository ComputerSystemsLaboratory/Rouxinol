#include <bits/stdc++.h>

const static double	de_PI	= 3.14159265358979323846;
const static int	de_MOD	= 1000000007;
const static int	de_MAX	= 999999999;
const static int	de_MIN = -999999999;

inline int Sieve_of_Eratothenes(const int n) {

	std::vector<bool> flg(n + 1, true);
	for (int i = 2; i < n; i++) {
		if (flg[i]) {
			for (int j = i + i; j <= n; j += i) {
				flg[j] = false;
			}
		}
	}

	return(std::count(flg.begin(), flg.end(), true) - 2);

}

int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	int a = 0;
	std::vector<int> A;
	while (std::cin >> a) {
		A.push_back(a);
	}

	std::for_each(A.begin(), A.end(),
		[](int i) {std::cout << Sieve_of_Eratothenes(i) << std::endl; });
}