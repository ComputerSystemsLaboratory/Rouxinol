#include<cstdio>

int main() {
	int n1, n2, t, cnt = 0;
	scanf("%d", &n1);
	int A[n1];
	for (int i = 0; i < n1; i++) {
		scanf("%d", &A[i]);
	}

	scanf("%d", &n2);
	for (int i = 0; i < n2; i++) {
		scanf("%d", &t);
		for (int j = 0; j < n1; j++) {
			if (t == A[j]) {
                            cnt += 1;
                            break;
                        }
		}
	}
	printf("%d\n", cnt);

	return 0;
}