

/*
https://muttan1203.hatenablog.com/entry/ALDS_1_4_D
*/
#include<iostream>

using ull = unsigned long long;
using ui = unsigned int;

int main() {
	ui n, k;
	int w[100'001];

	std::cin >> n >> k;
	for (ui i{}; i < n; ++i)
		std::cin >> w[i];

	auto check = [&](auto p) -> bool{
		ull sum{};
		ui index{};

		//k台分調べる
		for (ui i{}; i < k; ++i) {
			sum = 0;
			while (w[index] + sum <= p) {//もう一個積めるなら
				sum += w[index];//積んでいく
				index++;

				if (index == n)
					return true;//積み切った
			}
		}

		return false;//積み切れない=> pが足りない
	};


	ull left{}, right{10'000*100'000+1};
	while (right - left > 1) {
		ull mid = (right + left)/2;
		if (check(mid))
			right = mid;
		else
			left = mid;
	}

	std::cout << right << "\n";

	return 0;
}

