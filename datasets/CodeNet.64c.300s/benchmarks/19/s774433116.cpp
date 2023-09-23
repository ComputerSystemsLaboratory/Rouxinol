#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define REP(i,n) rep(i,0,n);
const int MIN_INT = -9999999;

int main(int argc, char *argv[]) {
	int dataN;
	while (EOF != fscanf(stdin, "%d", &dataN)) {
		if (dataN == 0) break;
		const int c_N = dataN;
		int tmp, sums[c_N], max_v=MIN_INT;
		memset(sums, 0, sizeof(sums));
		for (int i = 0; i < c_N; i++) {
			fscanf(stdin, "%d", &tmp);
			sums[i] += tmp;
			max_v = max(max_v, sums[i]);
			for (int j = 0; j < i; j++) {
				sums[j] += tmp;
				max_v = max(max_v, sums[j]);
			}
		}
		printf("%d\n", max_v);
	}
	return 0;
}