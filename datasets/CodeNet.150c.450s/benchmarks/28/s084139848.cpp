#include <cstdio>
#include <vector>
using namespace std;

int main()
{
	int n, K, l = 0, r = 0, P;
	scanf("%d %d", &n, &K);
	vector<int> w(n);
	for (int &x: w) {
		scanf("%d", &x);
		l = l > x ? l : x;
		r += x;
	}
	P = (r - l) / n + l;
	while (l != r) {
		auto i = w.begin(), e = w.end(), ee = e - 1;
		int k = 0, p = 0;
		for (; i != e && k < K; i++) {
			int t = p + *i;
			if (t < P)
				p = t;
			else if (t > P)
				p = *i, k++;
			else {
				p = 0;
				if (i != ee)
					k++;
			}
		}
		if (i == e && k < K)
			r = P;
		else
			l = P + 1;
		P = (l + r) / 2;
	}
	printf("%d\n", r);
}

