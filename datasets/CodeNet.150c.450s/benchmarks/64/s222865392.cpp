#include<cstdio>
#define max_n 20

int n, A[max_n], q, m_i;

bool solve(int i, int m){
	if(m == 0) return true;
	if(i >= n) return false;
	bool res = solve(i + 1, m) || solve(i + 1, m - A[i]);
	return res;
}

int main(void){
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &A[i]);
	scanf("%d", &q);
	for(int i = 0; i < q; i++){
		scanf("%d", &m_i);
		if(solve(0, m_i) == true) printf("yes\n");
		else printf("no\n");
	}

	return 0;
}