#include<iostream>
#include<vector>
int main() {
	std::vector<int> a, b;
	while (true) {
		int n;
		int as = 0, bs = 0;
		std::cin >> n;
		if (!n) {
			break;
		}
		for (int i = 0; i < n; ++i){
			int n, m;
			std::cin >> n >> m;
			if (n == m) { as += n;
			bs +=  m;
			}
			else if (n > m) {
				as += n + m;
			}
			else if (m > n) {
				bs += n+ m;
			}
		}
		a.push_back(as);
		b.push_back(bs);
	}
	for (int i = 0; i < a.size(); ++i) {
		std::cout << a[i] << " " << b[i] << std::endl;
	}
	return 0;
}