#include <cstdio>
#include <algorithm>
using namespace std;


int n, m;
char cv[256], ch, ch2;

int main(){
	while(scanf("%d\n", &n), n != 0) {
		fill(cv, cv + 256, 0);
		for (int i = 0; i < n; i++) {
			scanf("%c %c\n", &ch, &ch2);
			cv[ch] = ch2;
		}
		scanf("%d\n", &m);
		for (int i = 0; i < m; i++) {
			scanf("%c\n", &ch);
			printf("%c", cv[ch] == 0 ? ch : cv[ch]);
		}
		printf("\n");
	}

	return 0;
}