#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
int main() {
	int n;
	std::cin >> n;
	std::vector<std::string>v;
	for (int i = 0;i < n;++i) {
		int a, b, c;
		std::cin >> a >> b >> c;
		int max = std::max(a, std::max(b, c));
		if (a*a + b*b + c*c == max*max * 2) {
			v.push_back("YES");
		}
		else {
			v.push_back("NO");
		}
	}
	for (int i = 0;n > i;++i) {
		std::cout << v[i] << std::endl;
	}
	return 0;
}