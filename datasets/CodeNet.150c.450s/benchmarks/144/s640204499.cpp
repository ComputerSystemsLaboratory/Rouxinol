#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

template<typename T> 
void getmat(std::vector<std::vector<T>> &mat,unsigned n,unsigned m)
{
	for (int i = 0; i < n; i++) {
		std::vector<T> v;
		for (int i = 0; i < m; i++) {
			double n;
			std::cin >> n;
			v.push_back(n);
		}
		mat.push_back(v);
	}
}
template<typename T> 
void printmat(std::vector<std::vector<T>> mat)
{
	for (auto&& v : mat) {
		bool b{false};
		for (auto&& n : v) {
			if (b) std::cout << " ";
			b = true;
			std::cout << n ;
		}
		std::cout << std::endl;
	}
}

int main(int argc, char const* argv[])
{
	int n, m, l;
	std::vector<std::vector<unsigned long>> a, b, c;
	std::cout << std::fixed;
	std::cin >> n >> m >> l;
	getmat(a, n, m);
	getmat(b, m, l);
	c.resize(n);
	for (int i = 0; i < n; i++) {
		c[i].resize(l);
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < m; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	printmat(c);

	return 0;
}