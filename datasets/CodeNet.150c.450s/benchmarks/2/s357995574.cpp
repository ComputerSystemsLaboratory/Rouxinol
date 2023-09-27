
#include<iostream>
#include<vector>

using ull = unsigned long long;
using ui = unsigned int;



int main() {
	ui n;
	std::cin >> n;

	std::vector<ull> v;
	v.resize(n);

	for (auto&e : v)
		std::cin >> e;
		
	/*
		A => 配列。subscriptable。
		p => パーティションしたい配列の先頭
		r => 基準値
	*/
	auto partition = [](auto& A,ui p,ui r) {
		auto& x = A[r-1];
		ui i = p-1;
		/*
			基準値より小さいものを前に送って
			その個数（位置）を++する( = i )
		*/
		for (ui j{ p }; j < r-1; ++j) 
			if (A[j] <= x) {
				++i;
				std::swap(A[i], A[j]);
			}

		/*
			この時点で[p,i)には基準値以下、
			[i,r]には基準値以上しかない。
			最後に基準値を[i,r]の先頭(=i)に持ってくれば
			仕切りにできる。
		*/
		++i;
		std::swap(A[i], A[r-1]);

		return i;
		
	};

	auto x = partition(v, 0, v.size());
//	std::cout << x << "\n";
	ui i = 0;
	for (auto&e : v) {
		if (i == x)
			std::cout << "[" << e << "]";
		else
			std::cout << e;

		++i;
		std::cout << (i < n ? " " : "\n");
	}


	return 0;
}
