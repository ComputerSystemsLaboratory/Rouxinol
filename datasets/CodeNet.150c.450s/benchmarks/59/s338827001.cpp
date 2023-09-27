#include <iostream>
#include <vector>

template<typename T> void show_vector(std::vector<T> v) {
	auto size = v.size();
	for (int i = 0; i < size; i++) {
		if (i) {
			std::cout << " ";
		}
		std::cout << v[i];
	}
	std::cout << std::endl;
}

int main(int argc, char const* argv[])
{
	std::vector<int> v;
	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		int got_num;
		std::cin >> got_num;
		v.push_back(got_num);
	}
	for (int i = 1; i < N; i++) {
		auto to = i;
		auto data = v[i];
		show_vector(v);
		while (v[to-1]>data && to>=1) {
			to--;
		}

		v.erase(v.begin()+i);
		v.insert(v.begin()+to,data);
	}
		show_vector(v);
	return 0;
}