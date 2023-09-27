#include <bits/stdc++.h>
using namespace std;

void	calc_prime(int n, vector<bool> &is_prime)
{
	for (int i = 0; i < n; ++i)
		is_prime.at(i) = true;
	is_prime.at(0) = is_prime.at(1) = false;
	for (int i = 2; i < n; ++i) {
		if (!is_prime.at(i)) continue;
		for (int j = 2 * i; j < n; j += i)
			is_prime.at(j) = false;
	}
}

int	main()
{
	int	n;
	cin >> n;
	int	sqrt_n = sqrt(n);
	vector<bool>	is_prime(sqrt_n + 1);
	calc_prime(sqrt_n + 1, is_prime);
	vector<int>	fact_vec;
	int	quotient = n;
	for (int i = 2; i < sqrt_n + 1; ++i) {
		if (!is_prime.at(i)) continue;
		while (!(quotient % i)) {
			fact_vec.push_back(i);
			quotient /= i;
		}
		if (quotient == 1) break;
	}
	cout << n << ":";
	for (int p : fact_vec)
		cout << " " << p;
	if (quotient != 1) 
		cout << " " << quotient << endl;
	else
		cout << endl;
}



