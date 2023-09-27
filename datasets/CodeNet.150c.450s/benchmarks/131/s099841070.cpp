#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int f(int p,int l) {
	int a[10];
	for (int i = 0; i < l; i++) {
		a[i] = p % 10;
		p /= 10;
	}
	sort(a, a + l);
	int maxv = 0, minv = 0;
	for (int i = 0; i < l; i++) {
		maxv *= 10; maxv += a[l - i - 1];
		minv *= 10; minv += a[i];
	}
	return maxv - minv;
}
int find(vector<int>v, int p) {
	for (size_t i = 0; i < v.size(); i++) {
		if (v[i] == p)return i;
	}return -1;
}
int main() {
	int k, l;
	while (cin >> k >> l, l) {
		vector<int>v;
		while (true) {
			v.push_back(k);
			k = f(k, l);
			int p = find(v, k);
			if (p == -1);
			else {
				printf("%d %d %d\n", p, k, v.size() - p);
				goto heaven;
			}
		}
	heaven:;
	}
	return 0;
}
