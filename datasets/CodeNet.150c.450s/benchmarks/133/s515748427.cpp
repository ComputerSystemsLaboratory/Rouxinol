
#include <bits/stdc++.h>

typedef unsigned long long ULLONG;
typedef long long LLONG;
static const LLONG MOD_NUM = 1000000007; //998244353;

template<class _T> static void get(_T& a) {
	std::cin >> a;
}
template<class _T> static void get(_T& a, _T& b) {
	std::cin >> a >> b;
}
template<class _T> static void get(_T& a, _T& b, _T& c) {
	std::cin >> a >> b >> c;
}
template <class _T> static _T tp_abs(_T a) {
	if (a < (_T)0) {
		a *= (_T)-1;
	}
	return a;
}

static void exec();

int main()
{
	exec();
	fflush(stdout);
	return 0;
}

static void in(int& D, std::vector<int>& ci, std::vector<std::vector<int>>& sdi)
{
	get(D);

	for (auto& c : ci) {
		get(c);
	}
	
	sdi.resize(D);
	for (int i = 0; i < D; i++) {
		sdi[i].resize(26);
		for (auto& s : sdi[i]) {
			get(s);
		}
	}
}

static std::vector<int> calc(int& D, std::vector<int>& ci, std::vector<std::vector<int>>& sdi, std::vector<int>& ti)
{
	LLONG ans = 0;
	std::vector<int> last(26, 0), vi(D, 0);
	
	for (int d = 0; d < D; d++) {
		if (d) vi[d] = vi[d - 1];
		int held = ti[d];
		vi[d] += sdi[d][held];
		last[held] = d + 1;
		for (int c = 0; c < 26; c++) {
			vi[d] -= ci[c] * ((d + 1) - last[c]);
		}
	}
	return vi;
}

static void exec()
{
	int D = 0;
	std::vector<int> ci(26);
	std::vector<std::vector<int>> sdi;

	in(D, ci, sdi);
	std::vector<int> ti(D);
	for (auto& t : ti) {
		get(t);
		t--;
	}
	auto vi = calc(D, ci, sdi, ti);
	for (auto v : vi) {
		printf("%d\n", v);
	}
}
