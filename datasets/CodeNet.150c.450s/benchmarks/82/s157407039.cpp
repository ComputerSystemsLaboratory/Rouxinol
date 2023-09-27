#include<cstdio>
int main() {
	int face[6], q, i, a, b, p;
	scanf("%d%d%d%d%d%d%d", &face[0], &face[1], &face[2], &face[3], &face[4], &face[5], &q);
	for (i = 0; i < q; i++) {
		scanf("%d%d", &a, &b);
		if (a == face[0]) {
			if (b == face[1])p = 2;
			else if (b == face[2])p = 4;
			else if (b == face[4])p = 3;
			else p = 1;
		}
		else if (a == face[1]) {
			if (b == face[5])p = 2;
			else if (b == face[2])p = 0;
			else if (b == face[0])p = 3;
			else p = 5;
		}
		else if (a == face[2]) {
			if (b == face[5])p = 4;
			else if (b == face[4])p = 0;
			else if (b == face[0])p = 1;
			else p = 5;
		}
		else if (a == face[3]) {
			if (b == face[1])p = 0;
			else if (b == face[0])p = 4;
			else if (b == face[4])p = 5;
			else p = 1;
		}
		else if (a == face[4]) {
			if (b == face[0])p = 2;
			else if (b == face[2])p = 5;
			else if (b == face[5])p = 3;
			else p = 0;
		}
		else {
			if (b == face[4])p = 2;
			else if (b == face[2])p = 1;
			else if (b == face[1])p = 3;
			else p = 4;
		}
		printf("%d\n", face[p]);
	}
	return 0;
}
