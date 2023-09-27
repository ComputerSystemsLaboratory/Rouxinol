#include <iostream>
#include <vector>

long long int get_k(std::vector<long long int> v, long long int P) {
	long long int c = 1;
	long long int t = 0;
	for (std::vector<long long int>::iterator i = v.begin(); i != v.end(); ++i) {
		if (*i > P)
			return 1000000; // larger than max k
		t += *i;
		if (t > P) {
			c++;
			t = *i;
		}
	}
	return c;
}

long long int binary_search_P(std::vector<long long int> v, long long int l, long long int r, int k) {
	if (l == r)
		return l;
	long long int m = (l + r) / 2;

	if (get_k(v, m) <= k) 
		return binary_search_P(v, l, m, k);
	
	if (get_k(v, m) > k) 
		return binary_search_P(v, m + 1, r, k);
}



int main() {

	int n, k, P(0);
	std::cin >> n >> k;

	std::vector<long long int> v;
	v.resize(n);
	
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}

	long long int P_min = 1;
	long long int P_max = 100000 * 100000;


	P = binary_search_P(v, P_min, P_max, k);

	std::cout << P << std::endl;

	return 0;
}