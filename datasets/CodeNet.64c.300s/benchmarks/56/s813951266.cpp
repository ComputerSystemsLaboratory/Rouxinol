#include <cstdio>
using namespace std;

int n, y, m, d;

inline int y_c(int y) {
	if (y % 3 == 0) {
		return 200;
	}
	return 195;
}
inline int m_c(int y, int m) {
	if (y % 3 == 0 || m % 2 == 1) {
		return 20;
	}
	return 19;
}

int main(){
	int mil, bir;
	scanf("%d", &n);
	for (int I = 0; I < n; I++) {
		scanf("%d %d %d", &y, &m, &d);
		mil = 0;
		bir = d;
		for (int i = y; i < 1000; i++) {
			mil += y_c(i);
		}
		for (int i = 1; i < m; i++) {
			bir += m_c(y, i);
		}
		printf("%d\n", mil - bir + 1);
	}

	return 0;
}