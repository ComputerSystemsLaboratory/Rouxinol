#include<bits/stdc++.h>
using namespace std;

int c[1500];
int d[1500];
int main() {
	int a, b;
	while (scanf("%d%d", &a, &b),a | b) {
		map<int, int>e;
		map<int, int>f;
		memset(c, 0, a * 4);
		memset(d, 0, b * 4);
		for (int g = 0; g < a; g++) {
			int h;
			scanf("%d", &h);
			for (int i = 0; i <= g; i++) {
				c[i] += h;
				e[c[i]]++;
			}
		}
		for (int g = 0; g < b; g++) {
			int h;
			scanf("%d", &h);
			for (int i = 0; i <= g; i++) {
				d[i] += h;
				f[d[i]]++;
			}
		}
		int s = 0;
		for (auto k = e.begin(); k != e.end(); k++) {
			s += f[k->first] * k->second;
		}
		printf("%d\n", s);
	}
}