#include <cstdio>

int A[20], m;

bool rec(int i, int sum, int s){
	if (i == -1 || sum == s) return sum == s;
	return rec(i - 1, sum + A[i], s) || rec(i - 1, sum, s);
}
int main(){
	int n, q;

	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &A[i]);
	}

	scanf("%d", &q);


	for (int i = 0; i < q; i++){
		scanf("%d", &m);
		if (rec(n-1, 0, m)) printf("yes\n");
		else printf("no\n");
	}

	return 0;
}