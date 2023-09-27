#include <cstdio>
#include <vector>
using namespace std;

int main()
{
	int n, K, min = 0, max = 0, P;
	scanf("%d %d", &n, &K);

	vector<int> w(n);
	for (int &x: w) {
		scanf("%d", &x);
		min = min > x ? min : x;
		max += x;
	}
	min -= 1;
	
	for (;;) {
		P = (max + min) / 2;
		auto i = w.begin(), e = w.end(), j = i;
		int k = 0;
		for (; i != e && j != e && k < K; i++, k++) {
			int p = 0;
			for (j = i; j != e; j++) {
				if (p + *j > P) {
					i = j - 1;
					break;
				} else if (p + *j == P) {
					i = j;
					break;
				} else
					p += *j;
			}
		}
		if ((i == e || j == e) && k <= K)
			max = P;
		else
			min = P;
		if (max == min + 1) {
			P = max;
			break;
		}
	}
	printf("%d\n", P);
}
