#include<algorithm>
#include<stdio.h>
#include<vector>
#include<queue>

using namespace std;

int A[13] = { 0 };

bool solve(int a, int b,int c) {
	if (++c == 10)
		return true;
	else {
		bool r = false;
		if (a < A[c])
			r = solve(A[c], b, c);
		if (b < A[c] && r == false)
			r = solve(a,A[c], c);
		
		return r;
	}
}

int main(void) {
	A[10] = A[11] = A[12] = 100;
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++)
			scanf("%d", &A[j]);
		if (solve(A[0], 0, 0))
			printf("YES\n");
		else
			printf("NO\n");
	}
}