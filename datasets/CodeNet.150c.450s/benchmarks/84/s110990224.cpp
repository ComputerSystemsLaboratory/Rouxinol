#include <bits/stdc++.h>
using namespace std;

struct BIT {
	typedef int T;
private:
	vector<T> bit;
	T N;

public:
	BIT(T size){
		N = size;
		bit.resize(N + 1, 0);
	}

	void add(T a, T w) {
		for (int x = a; x <= N; x += x & -x) bit[x] += w;
	}

	T sum(T a) {
		T ret = 0;
		for (int x = a; x > 0; x -= x & -x) ret += bit[x];
		return ret;
	}

	T sum(T left, T right){
		return sum(right) - sum(left);
	}
};

int main() {
	int n;
	scanf("%d", &n);
	vector<pair<int, int> > a, b;
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		a.push_back(make_pair(x, i));
	}
	b = a;
	sort(b.begin(), b.end());
	for(int i = 0; i < n; i++)
		a[b[i].second].second = i + 1;
	long ans = 0;
	BIT bit(n);
	for (int i = 0; i < n; i++) {
		ans += i - bit.sum(a[i].second);
		bit.add(a[i].second, 1);
	}
	printf("%ld\n", ans);
}

