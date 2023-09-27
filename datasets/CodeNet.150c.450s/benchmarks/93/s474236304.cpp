
#include<iostream>
#include<vector>

using ull = unsigned long long;
using ui = unsigned int;

struct card {
	char mark;
	int n,index;
	auto operator<(const card&c)->bool {
		return this->n < c.n;
	}

	friend 
		auto operator>>(std::istream& is, card&c)->std::istream& {
		return is >> c.mark >> c.n;
	}

	friend
		auto operator<<(std::ostream& os, const card&c)->std::ostream& {
		return os << c.mark <<" "<< c.n;
	}
	card() = default;
};

/*
template<class F>
class fixture:  F {
public :
	explicit constexpr fixture(F&& f)noexcept
		:F(std::forward<F>(f)){}

	template<class ... Arg>
	constexpr decltype(auto)
		operator()(Arg&&...arg)const {
		return F::operator()(*this, std::forward<Arg>(arg)...);
	}
};

template<class F>
constexpr decltype(auto)
make(F&&f)noexcept {
	return fixture<F>{std::forward<F>(f)};
}
*/
template<class A,class Pertition>
auto qs(A&a,ui p, ui r, Pertition f)->void {
	if (p < r) {
		auto q = f(a, p, r);
		qs(a, p, q, f);
		qs(a, q + 1, r, f);
	}
}
int main() {
	ui n;
	std::cin >> n;

	std::vector<card> v;
	v.resize(n);

	for (ui i{}; i < n; ++i) {
		std::cin >> v[i];
		v[i].index = i;
	}

	/*
		A => 配列。subscriptable。
		p => パーティションしたい配列の先頭
		r => 基準値
	*/
	auto partition = [](auto& A, ui p, ui r) {
		auto& x = A[r - 1];
		ui i = p - 1;
		/*
			基準値より小さいものを前に送って
			その個数（位置）を++する( = i )
		*/
		for (ui j{ p }; j < r - 1; ++j)
			if (  !(x < A[j] ) ) {
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
		std::swap(A[i], A[r - 1]);

		return i;

	};

	qs(v, 0, v.size(),partition);


	bool stable{ true };
	for (ui i{ 1 }; i < n; ++i) {
		auto& a = v[i - 1];
		auto& b = v[i];

		if (a.n == b.n) {
			stable &= a.index < b.index;
		}
		if (!stable)
			break;
	}

	std::cout << (stable ? "Stable" : "Not stable") << "\n";
	for (const auto&e : v) {
		std::cout << e << "\n";
	}

	return 0;
}
