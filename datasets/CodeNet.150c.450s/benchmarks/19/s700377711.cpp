#include<iostream>
#include<algorithm>
#include<vector>
int main() {
	int a = 0;
	int b = 0;
	std::vector<int> v(0), w(0);
	while (true)
	{
		++a;
		++b;
		w.resize(b);
		v.resize(a);
		std::cin >> v[a - 1] >> w[b - 1];
		if ((v[a - 1] == 0) && (w[b - 1] == 0)) { break; }
	}
	for (int i = 0; i < a - 1; ++i) {
		if (v[i] > w[i])std::cout << w[i] << " " << v[i] << std::endl;
		else if (v[i] < w[i])std::cout << v[i] << " " << w[i] << std:: endl;
		else std::cout << v[i] << " " << w[i] << std:: endl;
	}
	return 0;
}