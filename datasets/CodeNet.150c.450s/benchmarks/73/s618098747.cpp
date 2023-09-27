#include <bits/stdc++.h>
using namespace std;

template <typename T>
struct BIT {
	int n;
	vector<T> value;
	BIT(int n): n(n), value(n + 1){}
	
	void add(int k, T x){
		while (k <= n){
			value[k] += x;
			k += k & -k;
		}
	}
	
	T sum(int k){
		T s = 0;
		while (k){
			s += value[k];
			k -= k & -k;
		}
		return s;
	}
	
	T sum(int s, int t){
		return sum(t) - sum(s - 1);
	}
};

int main()
{
	int n, q;
	scanf("%d %d", &n, &q);
	BIT<int> bit(n);
	for (int i = 0; i < q; i++){
		int com, x, y;
		scanf("%d %d %d", &com, &x, &y);
		if (com == 0) bit.add(x, y);
		else printf("%d\n", bit.sum(x, y));
	}
}