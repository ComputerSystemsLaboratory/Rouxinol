#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	bool f[31];
	memset(f, -1, sizeof f);
	for(int i = 0; i < 28; i++) {
		int t;
		scanf("%d", &t);
		f[t] = false;
	}
	for(int i = 1; i <= 30; i++) {
		if(f[i]) {
			printf("%d\n", i);
		}
	}
	return 0;
}