#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>

template <class T1, class T2>
struct pair_first_less {
	bool operator()(const std::pair<T1, T2> &x, const std::pair<T1, T2> &y) const {
		return x.first < y.first;
	}
};

template <class T1, class T2>
struct pair_second_less {
	bool operator()(const std::pair<T1, T2> &x, const std::pair<T1, T2> &y) const {
		return x.second < y.second;
	}
};

void input(std::vector< std::pair<int, int> > *t, int n)
{
	for (int i = 0; i < n; ++i) {
		int h0, m0, s0, h1, m1, s1;
		scanf("%02d:%02d:%02d %02d:%02d:%02d", &h0, &m0, &s0, &h1, &m1, &s1);
		const int t0 = (h0 * 60 + m0) * 60 + s0;
		const int t1 = (h1 * 60 + m1) * 60 + s1;
		t->push_back(std::pair<int, int>(t0, t1));
	}
}

int answer(const std::vector< std::pair<int, int> > &t)
{
	std::vector< std::pair<int, int> > f;	// 
	for (std::vector< std::pair<int, int> >::const_iterator it = t.begin(); it != t.end(); ++it) {
		if (it->first > it->second) { continue; }
		f.push_back(std::pair<int, int>(it->first, 1));
		f.push_back(std::pair<int, int>(it->second, -1));
	}
	std::sort(f.begin(), f.end(), pair_second_less<int, int>());
	std::stable_sort(f.begin(), f.end(), pair_first_less<int, int>());
	int n_max = 0, n = 0;
	for (std::vector< std::pair<int, int> >::iterator it = f.begin(); it != f.end(); ++it) {
		n += it->second;
		if (n > n_max) { n_max = n; }
	}
	return n_max;
}

int main()
{
	int n;
	while (scanf("%d", &n), n > 0) {
		std::vector< std::pair<int, int> > t;
		input(&t, n);
		printf("%d\n", answer(t));
	}
	return 0;
}