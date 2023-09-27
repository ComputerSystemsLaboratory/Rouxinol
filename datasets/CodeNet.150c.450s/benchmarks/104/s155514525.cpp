#include <cstdio>
using namespace std;

int w, n, l[31];

int main(){
	int a, b, t;
	scanf("%d", &w);
	scanf("%d", &n);
	for (int i = 1; i <= w; i++) {
		l[i] = i;
	}
	for (int I = 0; I < n; I++) {
		scanf("%d,%d", &a, &b);
		t = l[a];
		l[a] = l[b];
		l[b] = t;
	}
	for (int i = 1; i <= w; i++) {
		printf("%d\n", l[i]);
	}

	return 0;
}