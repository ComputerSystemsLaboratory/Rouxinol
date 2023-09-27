#include <cstdio>
using namespace std;

int n,p, c[51];

inline int next(int a) {
	return a == n - 1 ? 0 : a + 1;
}

int main(){
	int it;
	while (scanf("%d%d", &n, &p), n != 0) {
		for (int i = 0; i < 51; i++) {
			c[i] = 0;
		}
		it = 0;
		c[n] = p;
		while (true) {
			if (c[n] > 0) {
				c[it]++;
				c[n]--;
				if (c[it] == p) {
					printf("%d\n", it);
					break;
				}
			}
			else {
				c[n] += c[it];
				c[it] = 0;
			}
			it = next(it);
		}
	}
	
	return 0;
}